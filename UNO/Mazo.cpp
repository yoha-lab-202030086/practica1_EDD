#include "Mazo.h"
#include <string>

Mazo::Mazo() {
    }

void Mazo::crearMazoSimple() {

    string colores[] = {"Rojo", "Azul", "Verde", "Amarillo"};

    for (int i = 0; i < 4; i++) {
        for (int numero = 0; numero <= 4; numero++) {

            Carta nueva(colores[i], to_string(numero)); 
            cartas.push(nueva); 
        }
    }
}

Carta Mazo::robarCarta() {
    return cartas.pop();
}
