#include "CAZmedios.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase CAZmedios
// Constructor
CAZmedios::CAZmedios (string nm, int dj, int p)
    :Jugador (nm, dj), pases (p) {}
// Set
void CAZmedios::setPases(int p){
    pases = p;
}
// Get
int CAZmedios::getPases(){
    return pases;
}
// Mostrar Info
void CAZmedios::mostrarinfo(){
    cout << "\n Medio Del Cruz Azul" << endl;
    Jugador :: mostrarinfo();
    cout << "Los Pases del Jugador son de : " << pases << endl;
}
