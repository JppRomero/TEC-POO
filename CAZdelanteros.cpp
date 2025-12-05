// CAZdelanteros.cpp el cual contiene la implementacion
// de los metodos de la clase CAZdelanteros.

#include "CAZdelanteros.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZdelanteros
// Llamado del constructor de la clase CAZdelanteros.
CAZdelanteros::CAZdelanteros (string nm, int dj, int g)
    :Jugador (nm,dj), goles(g) {}

// Llamado del Setter de la clase CAZdelanteros.
void CAZdelanteros::setGoles(int g){
    goles = g;
}
// Llamado del Getter de la clase CAZdelanteros.
int CAZdelanteros::getGoles(){
    return goles;
}
// Llamado del metodo mostrarinfo de la clase CAZdelanteros.
void CAZdelanteros::mostrarinfo(){
    cout << "\n Delantero Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Goles del Jugador son de : " << goles << endl;
}
// Fin de la implementacion de los metodos de la clase CAZdelanteros.
