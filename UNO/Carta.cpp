#include "Carta.h"
#include <iostream>

using namespace std; 

Carta::Carta() {
        color = "";
        valor = "";
 }
        
Carta::Carta(string color, string valor) {
    this->color = color; 
    this->valor = valor; 
}

string Carta::getColor() {
        return color; 
}
string Carta::getValor() {
        return valor; 
}

void Carta::mostrar() {
    cout << "[" << color <<" " << valor << "j" << endl;
 }

