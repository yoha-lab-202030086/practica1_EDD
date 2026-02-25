#ifndef MAZO_H
#define MAZO_H
#include "NodoCarta.h"
#include <string>

using namespace std;

// mazo como una estructura de Pila (Stack)
class Mazo {
private:
    // Pila
    NodoCarta* cima;

public:
    // O(1)
    Mazo();

    // O(1)
    void push(Carta c);

    // sacar O(1)
    Carta pop();

    // O(1)
    bool vacio();

    // O(n)
    void crearMazo();

    // O(n)
    void barajar();
};

#endif
