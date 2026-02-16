#ifndef JUEGO_H
#define JUEGO_H

/*#include <iostream>
#include "Configuracion.h"
#include "ListaCircular.h"
#include "Pila.h"
#include "Nodo.h"
*/


class Juego {

private: 
    /*Configuracion config; 
    ListaCircular jugadores; 
    Pila Mazo; 
    Nodo* jugadorActual; 
    */

    int direccion; 

    void iniciarSimple(); 
    void iniciarFlip(); 

public: 
    void bienvenida();
    void MostrarMenu();
    void iniciar();
    
    /*void configurarJuego();
    void crearJugadores();
    void crearMazo();
    void repartirCartar();
    void iniciarPartida();
    */
    
    };
    #endif

    


