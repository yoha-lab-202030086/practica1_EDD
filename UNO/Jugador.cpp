#include "Jugador.h"
#include <iostream>
#include <iomanip>

using namespace std;

Jugador::Jugador(string n) {
    nombre = n;
    cantidad = 0;
}

void Jugador::agregarCarta(Carta c) {
    mano[cantidad] = c;
    cantidad++;
}

bool Jugador::tieneMovimiento(Carta actual) {
    for(int i = 0; i < cantidad; i++) {
        if(mano[i].esIgual(actual)) {
            return true;
        }
    }
    return false;
}

void Jugador::mostrarCartas() {

    for(int i = 0; i < cantidad; i++) {
        cout << setw(3) << i << " -> ";
        mano[i].mostrar();
        cout << endl;
    }
}

int Jugador::getCantidad() {
    return cantidad;
}

string Jugador::getNombre() {
    return nombre;
}

Carta Jugador::getCarta(int i) {
    return mano[i];
}

void Jugador::eliminarCarta(int i) {
    mano[i] = mano[cantidad - 1];
    cantidad--;
}