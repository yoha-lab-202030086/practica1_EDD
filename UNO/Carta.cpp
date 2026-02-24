#include "Carta.h"
#include <iostream>
#include <iomanip>

using namespace std;

extern void setColor(int);

Carta::Carta() {
    color = "";
    numero = -1;
}

Carta::Carta(string c, int n) {
    color = c;
    numero = n;
}

void Carta::mostrar() {

    int colorCode = 7;

    if(color == "Rojo") colorCode = 12;
    if(color == "Verde") colorCode = 10;
    if(color == "Azul") colorCode = 9;
    if(color == "Amarillo") colorCode = 14;

    setColor(colorCode);

    cout << "[ " << setw(8) << left << color 
         << " " << numero << " ]";

    setColor(7);
}
bool Carta::esIgual(Carta otra) {
    return color == otra.color || numero == otra.numero;
}