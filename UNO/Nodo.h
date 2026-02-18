#ifndef NODO_H
#define NODO_H

#include "Carta.h"

class Nodo { 
    public: 
    Carta dato; 
    Nodo* siguiente; 
    
    Nodo(Carta carta); 
   };

   #endif