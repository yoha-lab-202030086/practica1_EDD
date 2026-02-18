#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila { 

    private: 
    Nodo* tope; 

    public: 
    Pila(); 
    ~Pila();

    void push(Carta carta); 
    Carta pop();
    
    bool estaVacia(); 
}; 
    
#endif