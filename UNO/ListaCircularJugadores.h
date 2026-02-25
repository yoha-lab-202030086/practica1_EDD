#ifndef LISTACIRCULARJUGADORES_H
#define LISTACIRCULARJUGADORES_H

#include "NodoJugador.h"

class ListaCircularJugadores {

private:
    // Estructura circular
    NodoJugador* cabeza;
    NodoJugador* actual;

public:
    // Punteros en nulo - O(1)
    ListaCircularJugadores();

    // O(n)
    void agregar(Jugador* j);

    // O(1)
    void siguiente();

    //Referencia del jugador en turno - O(1)
    Jugador& jugadorActual();
};

#endif
