#ifndef MAZO_H
#define MAZO_H

#include "Pila.h"

class Mazo {

    private: 
    Pila cartas; 

    public: 
    Mazo();

   void crearMazoSimple(); 
   Carta robarCarta(); 
};

#endif