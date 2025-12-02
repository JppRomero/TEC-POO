#include "CAZdelanteros.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZdelanteros
// Constructor
CAZdelanteros::CAZdelanteros (string nm, int dj, int g)
    :Jugador (nm,dj), goles(g) {}
// Set
void CAZdelanteros::setGoles(int g){
    goles = g;
}
// Get
int CAZdelanteros::getGoles(){
    return goles;
}
// Mostrar Info
void CAZdelanteros::mostrarinfo(){
    cout << "\n Delantero Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Goles del Jugador son de : " << goles << endl;
}
