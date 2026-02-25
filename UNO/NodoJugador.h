#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H

#include "Jugador.h"

// Construccion de Lista Circular de jugadores
class NodoJugador {
public:
    // O(1)
    Jugador* jugador;
    NodoJugador* siguiente;

    // O(1)
    NodoJugador(Jugador* j);
};

#endif
