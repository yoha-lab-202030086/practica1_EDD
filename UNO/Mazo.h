#ifndef MAZO_H
#define MAZO_H
#include "NodoCarta.h"
#include <string>

using namespace std;

class Mazo {
private:
    NodoCarta* cima;

public:
    Mazo();
    void push(Carta c);
    Carta pop();
    bool vacio();
    void crearMazo();
    void barajar();
};

#endif