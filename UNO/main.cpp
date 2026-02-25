#include "Juego.h"
#include <iostream>

using namespace std;

int main() {

    int jugadores;

    cout << "Cantidad de jugadores (minimo 2): ";
    cin >> jugadores;

    // O(1)
    if(jugadores < 2) {
        cout << "Error: Minimo 2 jugadores.\n";
        return 0;
    }

    // Crear la instancia del juego y repartir cartas - O(n)
    Juego juego(jugadores);
    
    // O(n) 
    juego.iniciar();

cout << "\nPresiona Enter para salir...";
cin.get();
cin.get();

    return 0;
}
