#include "Jugador.h"
#include <iostream>

using namespace std;

Jugador::Jugador(string nombre) {
this->nombre = nombre;
}

void Jugador::robarCarta(Carta carta) {
    mano.push(carta); 
    }

void Jugador::mostrarMano() {
cout << "Cartas de " << nombre << ":\n"; 
mano.mostrar();
}

int Jugador::cantidadCartas() {
    return mano.obtenerCantidad();
}
