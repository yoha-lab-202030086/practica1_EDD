#include "Pila.h"
#include <iostream>

using namespace std; 

Pila::Pila() {  
    tope = nullptr; 
    cantidad = 0;
    } 

bool Pila::estaVacia() {
    return tope == nullptr;
  } 

void Pila::push(Carta carta) {
    Nodo* nuevoNodo = new Nodo(carta); 
    nuevoNodo->siguiente = tope; 
    tope = nuevoNodo; 

    cantidad++;
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

        cantidad --;
        
        return carta; 
}

void Pila::mostrar() {
    Nodo* actual = tope; 

    while (actual != nullptr) {
        cout << actual->dato.getColor() << " " << actual->dato.getValor() << endl; 
        actual = actual->siguiente; 
        }
}

int Pila::obtenerCantidad() {
    return cantidad; 
}

Pila::~Pila() {
    while (!estaVacia()) {
        pop();
    }
} 



