#ifndef CARTA_H
#define CARTA_H

#include <string>

using namespace std;

class Carta {
public:
    string color;
    int numero;

    Carta();
    Carta(string c, int n);

    void mostrar();
    bool esIgual(Carta otra);
};

#endif