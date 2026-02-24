#include "Mazo.h"
#include <cstdlib>
#include <ctime>

Mazo::Mazo() {
    cima = nullptr;
}

void Mazo::push(Carta c) {
    NodoCarta* nuevo = new NodoCarta(c);
    nuevo->siguiente = cima;
    cima = nuevo;
}

Carta Mazo::pop() {
    if (vacio()) return Carta();

    NodoCarta* temp = cima;
    Carta c = cima->carta;
    cima = cima->siguiente;
    delete temp;
    return c;
}

bool Mazo::vacio() {
    return cima == nullptr;
}

void Mazo::crearMazo() {

    string colores[4] = {"Rojo","Azul","Verde","Amarillo"};

    for(int c = 0; c < 4; c++) {
        for(int n = 0; n <= 9; n++) {
            push(Carta(colores[c], n));
            push(Carta(colores[c], n));
        }
    }
}

void Mazo::barajar() {

    srand(time(NULL));

    Carta temp[1000];
    int i = 0;

    while(!vacio()) {
        temp[i++] = pop();
    }

    for(int j = 0; j < i; j++) {
        int r = rand() % i;
        Carta aux = temp[j];
        temp[j] = temp[r];
        temp[r] = aux;
    }

    for(int j = 0; j < i; j++) {
        push(temp[j]);
    }
}