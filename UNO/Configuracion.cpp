#include "Configuracion.h"

Configuracion::Configuracion() { 
    modoFlip = false; 
    } 

void Configuracion::setModoFlip(bool valor) {
modoFlip = valor; 
}

bool Configuracion::getModoFlip() {
    return modoFlip; 
}