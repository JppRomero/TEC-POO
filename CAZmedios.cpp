// CAZmedios.cpp el cual contiene la implementacion
// de los metodos de la clase CAZmedios.

#include "CAZmedios.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZmedios
// Llamado del constructor de la clase CAZmedios.
CAZmedios::CAZmedios (string nm, int dj, int p)
    :Jugador (nm, dj), pases (p) {}

// Llamado del Setter de la clase CAZmedios.
void CAZmedios::setPases(int p){
    pases = p;
}
// Llamado del Getter de la clase CAZmedios.
int CAZmedios::getPases(){
    return pases;
}
// Llamado del metodo mostrarinfo de la clase CAZmedios.
void CAZmedios::mostrarinfo(){
    cout << "\n Medio Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Pases del Jugador son de : " << pases << endl;
}
// Fin de la implementacion de los metodos de la clase CAZmedios.
