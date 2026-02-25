#ifndef CARTA_H
#define CARTA_H

#include <string>

using namespace std;

//Complejidad de la clase: O(1)
class Carta {
public:
    // Atributos de la carta
    string color;
    int numero;

    // Constructores - O(1)
    Carta();
    Carta(string c, int n);

    // Métodos principales - O(1)
    void mostrar();
    bool esIgual(Carta otra);
};

#endif
