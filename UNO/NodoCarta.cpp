#include "NodoCarta.h"

// Inicializar nodo con una carta - O(1)
NodoCarta::NodoCarta(Carta c) {
    carta = c;
    siguiente = nullptr; 
}
