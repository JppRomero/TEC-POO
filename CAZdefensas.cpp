// CAZdefensas.cpp el cual contiene la implementacion 
// de los metodos de la clase CAZdefensas.

#include "CAZdefensas.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZdefensas
// Llamado del constructor de la clase CAZdefensas.
CAZdefensas::CAZdefensas(string nm, int dj, int bb) 
    :Jugador (nm, dj), balonesbloqueados (bb) {}

// Llamado del Setter de la clase CAZdefensas.
void CAZdefensas::setBalonesBloqueados(int bb){
    balonesbloqueados = bb;
}
// Llamado del Getter de la clase CAZdefensas.
int CAZdefensas::getBalonesBloqueados(){
    return balonesbloqueados;
}
// Llamado del metodo mostrarinfo de la clase CAZdefensas.
void CAZdefensas::mostrarinfo(){
    cout << "\n Defensa Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Balones Bloqueados son : " << balonesbloqueados << endl;
}
// Fin de la implementacion de los metodos de la clase CAZdefensas.
