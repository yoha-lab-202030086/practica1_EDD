#ifndef JUGADOR_H
#define JUGADOR_H

#include "Carta.h"

class Jugador {
private:
    Carta mano[200];
    int cantidad;
    string nombre;

public:
    Jugador(string n);

    void agregarCarta(Carta c);
    bool tieneMovimiento(Carta actual);
    void mostrarCartas();
    int getCantidad();
    string getNombre();

    Carta getCarta(int i);
    void eliminarCarta(int i);
};

#endif