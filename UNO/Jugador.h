#ifndef JUGADOR_H
#define JUGADOR_H

#include "Carta.h"

class Jugador {
private:
    // Arreglo estático de cartas y contador de mano
    Carta mano[200];
    int cantidad;
    string nombre;

public:
    // Inicializar - O(1)
    Jugador(string n);

    // O(1)
    void agregarCarta(Carta c);
    
    //Jugadas posibles - O(n)
    bool tieneMovimiento(Carta actual);
    
    // O(n)
    void mostrarCartas();
    
    //acceso - O(1)
    int getCantidad();
    string getNombre();

    // O(1)
    Carta getCarta(int i);
    void eliminarCarta(int i);
};

#endif
