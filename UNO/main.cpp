#include <iostream>
#include "Jugador.h"
#include "Mazo.h"

using namespace std;  

int main() {
    
//Crear pila
Mazo mazo; 

//crear cartas 
mazo.crearMazoSimple();

Jugador jugador1("Jugador 1");

for (int i = 0; i < 5; i++) {
    jugador1.robarCarta(mazo.robarCarta());
}

jugador1.mostrarMano();

cout << "\nCantidad de cartas: "
<< jugador1.cantidadCartas() << endl;

return 0;
}