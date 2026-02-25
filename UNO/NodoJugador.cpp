#include "NodoJugador.h"

// O(1)
NodoJugador::NodoJugador(Jugador* j) {
    jugador = j;
    siguiente = nullptr; 
}
