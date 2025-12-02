#include "Jugador.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase base Jugador
// Constructor
Jugador::Jugador (string nm, int dj) : nombrejug(nm), dorsaljug(dj) {}
// Set
void Jugador::setNombres(string nm){
    nombrejug = nm;
}
void Jugador::setDorsal(int dj){
    dorsaljug = dj;
}
// Get
string Jugador::getNombres(){
    return nombrejug;
}
int Jugador::getDorsal(){
    return dorsaljug;
}
// Mostrar Info
void Jugador::mostrarinfo(){
    cout << "Nombre del Jugador: " << nombrejug << endl;
    cout << "Dorsal del Jugador: " << dorsaljug << endl;
}
