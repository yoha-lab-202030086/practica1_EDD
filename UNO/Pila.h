#include guard 
#include "Nodo.h"

class Pila { 

    private: 
    Nodo* tope; 

    public: 
    Pila(); 
    ~Pila();
    void push(int valor); 
    int pop();
    bool estaVacia(); 
    }; 
    
