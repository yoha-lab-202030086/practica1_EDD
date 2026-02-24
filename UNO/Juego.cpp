#include "Juego.h"
#include <iostream>
#include <windows.h>
#include <iomanip>

void setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

using namespace std;

Juego::Juego(int numJugadores) {

    // Crear jugadores
    for(int i = 1; i <= numJugadores; i++) {
        jugadores.agregar(new Jugador("Jugador " + to_string(i)));

    }

    // Calcular cantidad de mazos 
    int cantidadMazos = ((numJugadores - 1) / 6) + 1;

    for(int i = 0; i < cantidadMazos; i++) {
        mazo.crearMazo();
    }



    mazo.barajar();




    // Posicionar al inicio
    jugadores.siguiente(); 

    // Repartir 7 cartas
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

    // Carta inicial de la mesa
    if(!mazo.vacio()) {
        cartaActual = mazo.pop();
    } else {
        cout << "Error: No hay carta inicial.\n";
    }
}
void Juego::iniciar() {

    jugadores.siguiente(); // posicionar primer jugador

    while(true) {

        Jugador &j = jugadores.jugadorActual();

        setColor(11);
        cout << "=========================================\n";
        cout << "               U N O  GAME\n";
        cout << "=========================================\n";
        setColor(7);

        cout << "\nCarta actual en mesa:\n\n";
        cartaActual.mostrar();
        cout << "\n\n-----------------------------------------\n";

        cout << "\nTurno de: ";
        setColor(13);
        cout << j.getNombre() << endl;
        setColor(7);

        cout << "\nTus cartas:\n\n";
        j.mostrarCartas();

        cout << "\n-----------------------------------------\n";

        if(j.tieneMovimiento(cartaActual)) {

            int opcion;
            cout << "\nElige indice de carta a jugar: ";
            cin >> opcion;

            if(opcion >= 0 && opcion < j.getCantidad()) {

                Carta seleccionada = j.getCarta(opcion);

                if(seleccionada.esIgual(cartaActual)) {

                    cartaActual = seleccionada;
                    j.eliminarCarta(opcion);

                    if(j.getCantidad() == 0) {
                        setColor(10);
                        cout << "\n GANADOR: " << j.getNombre() << " \n\n";
                        setColor(7);
                        break;
                    }

                } else {
                    cout << "\nCarta invalida. Presiona Enter...";
                    cin.ignore();
                    cin.get();
                }

            } else {
                cout << "\nIndice invalido. Presiona Enter...";
                cin.ignore();
                cin.get();
            }

        } else {
            cout << "\nNo puedes jugar. Robas 1 carta...";
            cin.ignore();
            cin.get();
            j.agregarCarta(mazo.pop());
        }

        jugadores.siguiente(); //Avanza al final del turno
    }
}