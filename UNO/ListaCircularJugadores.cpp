#include "ListaCircularJugadores.h"

ListaCircularJugadores::ListaCircularJugadores() {
    cabeza = nullptr;
    actual = nullptr;
}

void ListaCircularJugadores::agregar(Jugador* j) {

    NodoJugador* nuevo = new NodoJugador(j);

    if(cabeza == nullptr) {
        cabeza = nuevo;
        cabeza->siguiente = cabeza;


        
        actual = cabeza;



    } else {
        NodoJugador* temp = cabeza;
        while(temp->siguiente != cabeza) {
            temp = temp->siguiente;
}
        temp->siguiente = nuevo;
        nuevo->siguiente = cabeza;
    }
}

void ListaCircularJugadores::siguiente() {
    if(actual != nullptr)
        actual = actual->siguiente;
}

Jugador& ListaCircularJugadores::jugadorActual() {
    return *(actual->jugador);
}