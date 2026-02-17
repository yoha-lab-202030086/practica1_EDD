#include "Juego.h"
#include <iostream>

using namespace std; 

void Juego::bienvenida() {
    cout << "=====================" << endl ; 
    cout <<  "BIENVENDO AL JUEGO" << endl ; 
    cout << "=====================" << endl ; 
}

void Juego::MostrarMenu() {
    int opcion; 
    cout << "\nMENU\n" << endl ; 
    cout <<  "1. Jugar UNO simple" << endl ; 
    cout << "2. Jugar UNO flip" << endl ; 
    cout << "Seleccione una opcion: " ; 
    cin >> opcion; 
 

    if(opcion == 1) {
    Config.setModoFlip(false);
    } else if(opcion == 2) {
    Config.getModoFlip(true); 
    } else { 
    cout << "Opcion invalida" << endl;
  }
}

void Juego::iniciarSimple()   {
 cout << "Iniciando UNO simple..." << endl; 
}

void Juego::iniciarFlip() {
    cout << "Iniciando UNO flip..." << endl; 
    }

void Juego::iniciar() {
    bienvenida();
    MostrarMenu();
}