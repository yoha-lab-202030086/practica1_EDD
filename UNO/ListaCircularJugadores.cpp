#include "ListaCircularJugadores.h"

//Lista vacía - O(1)
ListaCircularJugadores::ListaCircularJugadores() {
    cabeza = nullptr;
    actual = nullptr;
}

// Insertar un nuevo jugador al final de la lista - O(n)
void ListaCircularJugadores::agregar(Jugador* j) {

    NodoJugador* nuevo = new NodoJugador(j);

    if(cabeza == nullptr) {
        cabeza = nuevo;
        cabeza->siguiente = cabeza;  
        actual = cabeza;

    } else {
        // Recorrer la lista para encontrar el último nodo - O(n)
        NodoJugador* temp = cabeza;
        while(temp->siguiente != cabeza) {
            temp = temp->siguiente;
        }
    
        temp->siguiente = nuevo;
        nuevo->siguiente = cabeza;
    }
}

// Puntero al siguiente jugador del turno - O(1)
void ListaCircularJugadores::siguiente() {
    if(actual != nullptr)
        actual = actual->siguiente;
}

// Retornar el objeto Jugador del turno actual - O(1)
Jugador& ListaCircularJugadores::jugadorActual() {
    return *(actual->jugador);
}
