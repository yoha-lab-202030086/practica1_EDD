#include "Juego.h"
#include <iostream>

using namespace std; 

//Constructor con lista de inicializacion 
Juego::Juego()
: jugador1("Jugador 1"),
jugador2("Jugador 2") {
}



void Juego::bienvenida() {
    cout << "========================\n" << endl ; 
    cout <<  "BIENVENDO AL JUEGO UNO\n" << endl ; 
    cout << "========================\n" << endl ; 
}

void Juego::MostrarMenu() {
    int opcion; 
    cout << "\nMENU\n" ; 
    cout << "1. Jugar UNO simple\n" ; 
    cout << "2. Jugar UNO flip\n" ; 
    cout << "Seleccione una opcion: " ;
    cin >> opcion; 
 

    if(opcion == 1) {
    config.setModoFlip(false);
    } 
    else if(opcion == 2) {
    config.setModoFlip(true); 
    } else { 
    cout << "Opcion invalida\n" ;
    config.setModoFlip(false) ; 
  }
}

void Juego::iniciarSimple()   {
 cout << "Iniciando UNO simple...\n" ;
 
 mazo.crearMazoSimple(); 

 //Repartir 7 cartas 

for(int i = 0; i < 7; i++) {
    jugador1.robarCarta(mazo.robarCarta()) ; 
    jugador2.robarCarta(mazo.robarCarta()) ;
}

//Carta inicial en mesa

cartaEnMesa = mazo.robarCarta(); 
cout << "\nCarta inicial en mesa: " 
     << cartaEnMesa.getColor()
     << " "
     << cartaEnMesa.getValor()
     << endl ; 

cout << "\n--- Jugador 1 ---\n"; 
jugador1.mostrarMano();

cout << "\n--- Jugador 2 ---\n"; 
jugador2.mostrarMano();
}

void Juego::iniciarFlip() {
    cout << "\nIniciando UNO flip...\n" ; 

    //Usando el mismo mazo simple
    mazo.crearMazoSimple(); 

    for(int i = 0; i < 7; i++) {
    jugador1.robarCarta(mazo.robarCarta()) ; 
    jugador2.robarCarta(mazo.robarCarta()) ;
    }

    cartaEnMesa = mazo.robarCarta();

    cout << "\nCarta inicial en mesa: " 
         << cartaEnMesa.getColor()
         << " "
         << cartaEnMesa.getValor() 
         << endl ; 

    }

void Juego::iniciar() {
    bienvenida();
    MostrarMenu();

    if(config.getModoFlip() ) {
        iniciarFlip();
   } else {
    iniciarSimple();
    }
}