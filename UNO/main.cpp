#include <iostream>
#include "Pila.h"
#include "Carta.h"

using namespace std;  

int main() {
    
//Crear pila
Pila mazo; 

//crear cartas 
Carta c1("Rojo", "5");
Carta c2("Azul", "9");
Carta c3("Verde", "2");

//push
mazo.push(c1);
mazo.push(c2);
mazo.push(c3);

cout << "Se agregan 3 cartas a la pila. \n\n"; 

//pop
Carta sacada1 = mazo.pop();
Carta sacada2 = mazo.pop();
Carta sacada3 = mazo.pop();

cout << "Cartas sacadas: \n"; 
cout << sacada1.getColor() << " " << sacada1.getValor() << endl; 
cout << sacada2.getColor() << " " << sacada2.getValor() << endl;
cout << sacada3.getColor() << " " << sacada3.getValor() << endl; 
 
return 0;
}