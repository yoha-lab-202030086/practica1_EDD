#ifndef LISTACIRCULARJUGADORES_H
#define LISTACIRCULARJUGADORES_H

#include "NodoJugador.h"

class ListaCircularJugadores {

private:
    NodoJugador* cabeza;
    NodoJugador* actual;

public:
    ListaCircularJugadores();
    void agregar(Jugador* j);
    void siguiente();
    Jugador& jugadorActual();
};

#endif