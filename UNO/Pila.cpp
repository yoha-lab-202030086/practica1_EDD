#include "Pila.h"

Pila::Pila() {  
    tope = nullptr; 
    } 

bool Pila::estaVacia() {
    return tope == nullptr;
  } 

void Pila::push(int valor) {
    Nodo* nuevoNodo = new Nodo(valor); 
    nuevoNodo->siguiente = tope; 
    tope = nuevoNodo; 
    }

    int Pila::pop() {
        if(estaVacia()) {
            cout <<"La pila esta vacia"; 
            return -1; 
            }
int valor = tope->dato;
        Nodo* temp = tope; 
        tope = tope->siguiente;
        delete temp; 

        return valor; 
}

