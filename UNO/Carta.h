#ifndef CARTA_H
#define CARTA_H

#include <string>
using namespace std; 

class Carta {

private: 
string color; 
string valor; 

public: 
Carta();
Carta(string color, string valor); 
string getColor();
string getValor(); 

void mostrar(); 

};
#endif