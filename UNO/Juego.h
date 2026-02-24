#ifndef JUEGO_H
#define JUEGO_H

#include "ListaCircularJugadores.h"
#include "Mazo.h"

class Juego {

private:
    ListaCircularJugadores jugadores;
    Mazo mazo;
    Carta cartaActual;

public:
    Juego(int numJugadores);
    void iniciar();
};

#endif