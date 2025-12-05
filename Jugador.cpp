// Jugador.cpp el cual contiene la implementacion
// de los metodos de la clase base Jugador.

#include "Jugador.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase base Jugador.
// Llamado de constructor de la clase Jugador.
Jugador::Jugador (string nm, int dj) : nombrejug(nm), dorsaljug(dj) {}

// Llamado de los Setters de la clase Jugador.
void Jugador::setNombres(string nm){
    nombrejug = nm;
}
void Jugador::setDorsal(int dj){
    dorsaljug = dj;
}

// Llamado de los Getters de la clase Jugador.
string Jugador::getNombres(){
    return nombrejug;
}
int Jugador::getDorsal(){
    return dorsaljug;
}

// Llamado de el metodo mostrarinfo de la clase Jugador.
void Jugador::mostrarinfo(){
    cout << "Nombre del Jugador: " << nombrejug << endl;
    cout << "Dorsal del Jugador: " << dorsaljug << endl;
}
// Fin de la implementacion de los metodos de la clase Jugador.'
