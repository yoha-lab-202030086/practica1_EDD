#ifndef NODOCARTA_H
#define NODOCARTA_H

#include "Carta.h"

class NodoCarta {
public:
    Carta carta;
    NodoCarta* siguiente;

    NodoCarta(Carta c);
};

#endif