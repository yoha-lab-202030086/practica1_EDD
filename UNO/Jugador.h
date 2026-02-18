#ifndef JUGADOR_H
#define JUGADOR_H

#include "Pila.h"
#include <string>

class Jugador {

    private: 
    Pila mano; 
    string nombre;

    public: 
    Jugador(string nombre); 

    void robarCarta(Carta carta); 
    void mostrarMano(); 

    int cantidadCartas();
};

#endif