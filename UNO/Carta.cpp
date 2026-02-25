#include "Carta.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Función de colores
extern void setColor(int);

// Inicializar carta vacía - O(1)
Carta::Carta() {
    color = "";
    numero = -1;
}

// Asignar valores a la carta - O(1)
Carta::Carta(string c, int n) {
    color = c;
    numero = n;
}

// Mostrar la carta con su color - O(1)
void Carta::mostrar() {
    int colorCode = 7; 

    // Definir color según el texto
    if(color == "Rojo") colorCode = 12;
    if(color == "Verde") colorCode = 10;
    if(color == "Azul") colorCode = 9;
    if(color == "Amarillo") colorCode = 14;

    setColor(colorCode);

    // Formato para alineado
    cout << "[ " << setw(8) << left << color 
         << " " << numero << " ]";

    // Resetear color
    setColor(7);
}

// Validar si la carta sirve para jugar - O(1)
bool Carta::esIgual(Carta otra) {
    return color == otra.color || numero == otra.numero;
}

