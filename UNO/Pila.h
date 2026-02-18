#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

class Pila { 

    private: 
    Nodo* tope; 
    int cantidad; 

    public: 
    Pila(); 
    ~Pila();

    void push(Carta carta); 
    Carta pop();
    bool estaVacia(); 
    void mostrar();

    int obtenerCantidad();
}; 
    
#endif