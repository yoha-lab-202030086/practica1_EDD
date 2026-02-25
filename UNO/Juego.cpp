#include "Juego.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif 
#include <iomanip>

// Cambiar color de la consola - O(1)
void setColor(int color){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    #endif 
}

using namespace std;

//Configura el inicio del juego - O(n)
Juego::Juego(int numJugadores) {

    // Crear jugadores
    for(int i = 1; i <= numJugadores; i++) {
        jugadores.agregar(new Jugador("Jugador " + to_string(i)));
    }

    // Calcular y crear mazos necesarios
    int cantidadMazos = ((numJugadores - 1) / 6) + 1;
    for(int i = 0; i < cantidadMazos; i++) {
        mazo.crearMazo();
    }

    mazo.barajar();
    jugadores.siguiente(); 

    // Repartir 7 cartas a cada jugador - O(n)
    for(int r = 0; r < 7; r++) {
        for(int i = 0; i < numJugadores; i++) {
            if(mazo.vacio()) {
                cout << "Error: Mazo insuficiente.\n";
                break;
            }
            jugadores.jugadorActual().agregarCarta(mazo.pop());
            jugadores.siguiente();
        }
    }

    // Carta inicial en mesa - O(1)
    if(!mazo.vacio()) {
        cartaActual = mazo.pop();
    }
}

// Bucle principal del juego
void Juego::iniciar() {

    jugadores.siguiente(); 

    while(true) {
        Jugador &j = jugadores.jugadorActual();

        // Mostrar interfaz y datos del turno
        setColor(11);
        cout << "=========================================\n";
        cout << "               U N O  GAME\n";
        cout << "=========================================\n";
        setColor(7);

        cout << "\nCarta actual en mesa:\n\n";
        cartaActual.mostrar();
        
        cout << "\nTurno de: ";
        setColor(13);
        cout << j.getNombre() << endl;
        setColor(7);

        j.mostrarCartas(); // O(n) porque recorre las cartas del jugador

        // Lógica de validación de jugada
        if(j.tieneMovimiento(cartaActual)) {
            int opcion;
            cout << "\nElige indice de carta a jugar: ";
            cin >> opcion;

            if(opcion >= 0 && opcion < j.getCantidad()) {
                Carta seleccionada = j.getCarta(opcion);

                if(seleccionada.esIgual(cartaActual)) {
                    cartaActual = seleccionada;
                    j.eliminarCarta(opcion);

                    // Validar si alguien ganó
                    if(j.getCantidad() == 0) {
                        setColor(10);
                        cout << "\n GANADOR: " << j.getNombre() << " \n\n";
                        setColor(7);
                        break;
                    }
                }
            }
        } else {
            // Robar carta si no hay movimientos - O(1)
            cout << "\nNo puedes jugar. Robas 1 carta...";
            cin.ignore(); cin.get();
            j.agregarCarta(mazo.pop());
        }

        jugadores.siguiente(); // Siguiente turno - O(1)
    }
}
