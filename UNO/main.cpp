#include "Juego.h"
#include <iostream>

using namespace std;

int main() {

  int jugadores;

cout << "Cantidad de jugadores (minimo 2): ";
cin >> jugadores;

if(jugadores < 2) {
    cout << "Error: Minimo 2 jugadores.\n";
    return 0;
}

Juego juego(jugadores);
juego.iniciar();
}