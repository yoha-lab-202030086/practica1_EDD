#include <iostream>
#include "Mazo.h"

using namespace std;  

int main() {
    
//Crear pila
Mazo mazo; 

//crear cartas 
mazo.crearMazoSimple();

cout << "Mazo creado.\n\n"; 

for (int i = 0; i < 5; i++) {
    Carta carta = mazo.robarCarta();
cout << carta.getColor() << " " << carta.getValor()<< endl;
 
}

return 0;
}