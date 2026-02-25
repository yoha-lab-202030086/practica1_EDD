#include "Jugador.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor: nombre del jugador - O(1)
Jugador::Jugador(string n) {
    nombre = n;
    cantidad = 0;
}

//Nueva carta del jugador - O(1)
void Jugador::agregarCarta(Carta c) {
    mano[cantidad] = c;
    cantidad++;
}

// Verificar cartas - O(n)
bool Jugador::tieneMovimiento(Carta actual) {
   
    for(int i = 0; i < cantidad; i++) {
        if(mano[i].esIgual(actual)) {
            return true; // Movimiento válido encontrado
        }
    }
    return false; 
}

// O(n)
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

// Quita una carta de la mano - O(1)
void Jugador::eliminarCarta(int i) {
    mano[i] = mano[cantidad - 1];
    cantidad--;
}