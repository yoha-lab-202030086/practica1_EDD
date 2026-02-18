#include "Pila.h"
#include <iostream>

using namespace std; 

Pila::Pila() {  
    tope = nullptr; 
    } 

bool Pila::estaVacia() {
    return tope == nullptr;
  } 

void Pila::push(Carta carta) {
    Nodo* nuevoNodo = new Nodo(carta); 
    nuevoNodo->siguiente = tope; 
    tope = nuevoNodo; 
    }

Carta Pila::pop() {
        
    if(estaVacia()) {
            cout <<"La pila esta vacia\n"; 
            return Carta("", ""); 
            }
      Carta carta = tope->dato;
        Nodo* temp = tope; 
        tope = tope->siguiente;
        delete temp; 

        return carta; 
}

Pila::~Pila() {
    while (!estaVacia()) {
        pop();
    }
}

