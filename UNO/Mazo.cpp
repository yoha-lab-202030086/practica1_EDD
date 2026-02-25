#include "Mazo.h"
#include <cstdlib>
#include <ctime>

// Constructor: - O(1)
Mazo::Mazo() {
    cima = nullptr;
}

// Agregar carta arriba de la pila - O(1)
void Mazo::push(Carta c) {
    NodoCarta* nuevo = new NodoCarta(c);
    nuevo->siguiente = cima;
    cima = nuevo;
}

// Sacar carta (LIFO) - O(1)
Carta Mazo::pop() {
    if (vacio()) return Carta();

    NodoCarta* temp = cima;
    Carta c = cima->carta;
    cima = cima->siguiente;
    delete temp; // Liberar memoria
    return c;
}

// Verificar si no hay cartas - O(1)
bool Mazo::vacio() {
    return cima == nullptr;
}

// Llenar el mazo - O(n)
void Mazo::crearMazo() {
    string colores[4] = {"Rojo","Azul","Verde","Amarillo"};

    for(int c = 0; c < 4; c++) {
        for(int n = 0; n <= 9; n++) {
            push(Carta(colores[c], n));
            push(Carta(colores[c], n));
        }
    }
}

// O(n)
void Mazo::barajar() {
    srand(time(NULL)); //Números aleatorios

    Carta temp[1000];
    int i = 0;

    // Pasar pila a un arreglo temporal para mezclar - O(n)
    while(!vacio()) {
        temp[i++] = pop();
    }

    // Intercambio aleatorio de posiciones - O(n)
    for(int j = 0; j < i; j++) {
        int r = rand() % i;
        Carta aux = temp[j];
        temp[j] = temp[r];
        temp[r] = aux;
    }

    // Regresar las cartas mezcladas a la pila - O(n)
    for(int j = 0; j < i; j++) {
        push(temp[j]);
    }
}
