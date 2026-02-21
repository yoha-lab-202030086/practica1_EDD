#ifndef JUEGO_H
#define JUEGO_H

#include "Configuracion.h"
#include "Mazo.h"
#include "Jugador.h"

class Juego {

private: 
    Configuracion config; 
    Mazo mazo; 

    Jugador jugador1; 
    Jugador jugador2; 

    Carta cartaEnMesa; 

    void iniciarSimple(); 
    void iniciarFlip(); 

public: 
Juego();

    void bienvenida();
    void MostrarMenu();
    void iniciar();
    
    };
    #endif

    


