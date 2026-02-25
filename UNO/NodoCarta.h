#ifndef NODOCARTA_H
#define NODOCARTA_H

#include "Carta.h"

class NodoCarta {
public:
    // O(1)
    Carta carta;
    NodoCarta* siguiente;

    // O(1)
    NodoCarta(Carta c);
};

#endif
