#include "CAZdefensas.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZdefensas
// Constructor
CAZdefensas::CAZdefensas(string nm, int dj, int bb) 
    :Jugador (nm, dj), balonesbloqueados (bb) {}
// Set
void CAZdefensas::setBalonesBloqueados(int bb){
    balonesbloqueados = bb;
}
// Get
int CAZdefensas::getBalonesBloqueados(){
    return balonesbloqueados;
}
// Mostrar Info
void CAZdefensas::mostrarinfo(){
    cout << "\n Defensa Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Balones Bloqueados son : " << balonesbloqueados << endl;
}
