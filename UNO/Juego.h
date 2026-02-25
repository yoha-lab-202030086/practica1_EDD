#ifndef JUEGO_H
#define JUEGO_H

#include "ListaCircularJugadores.h"
#include "Mazo.h"

class Juego {

private:
    // Atributos principales el funcionamiento 
    ListaCircularJugadores jugadores;
    Mazo mazo;
    Carta cartaActual;

public:
    // Constructor: Configura jugadores y mazo - O(n)
    Juego(int numJugadores);
    
    // Iniciar el bucle de turnos - O(n) por cada turno
    void iniciar();
};

#endif
