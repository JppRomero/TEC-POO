//Equipo.cpp el cual contiene la implementacion
// de los metodos de la clase Equipo.

#include "Equipo.h"
#include <iostream>
#include <string>
using namespace std;
// Implementacion de los metodos de la clase Equipo
// Llamado del constructor de la clase Equipo.
Equipo::Equipo() : cantPorteros(0), cantDefensas(0), 
cantMedios(0), cantDelanteros(0) {}

// Llamado de los metodos para agregar jugadores al equipo.

// Agregamos un portero al equipo
void Equipo::agregarPortero(string nm, int dj, int bp){
    if (cantPorteros < 3){
        porteros[cantPorteros] = CAZporteros(nm, dj, bp);
        cantPorteros++;
    }
}
// Agregamos un defensa al equipo
void Equipo::agregarDefensa(string nm, int dj, int bb){
    if (cantDefensas < 7){
        defensas[cantDefensas] = CAZdefensas(nm, dj, bb);
        cantDefensas++;
    }
}
// Agregamos un mediocampista al equipo
void Equipo::agregarMedio(string nm, int dj, int p){
    if (cantMedios < 13){
        medios[cantMedios] = CAZmedios(nm, dj, p);
        cantMedios++;
    }
}
// Agregamos un delantero al equipo
void Equipo::agregarDelantero(string nm, int dj, int g){
    if (cantDelanteros < 3){
        delanteros[cantDelanteros] = CAZdelanteros(nm, dj, g);
        cantDelanteros++;
    }
}

// Llamado del metodo para mostrar la informacion del equipo.
void Equipo::mostrarEquipo(){
    cout << "\n--- Equipo de Cruz Azul ---\n" << endl;
    cout << "\n--- Porteros ---" << endl;
    for (int i = 0; i < cantPorteros; i++){
        porteros[i].mostrarinfo();
    }
    cout << "\n--- Defensas ---" << endl;
    for (int i = 0; i < cantDefensas; i++){
        defensas[i].mostrarinfo();
    }
    cout << "\n--- Mediocampistas ---" << endl;
    for (int i = 0; i < cantMedios; i++){
        medios[i].mostrarinfo();
    }
    cout << "\n--- Delanteros ---" << endl;
    for (int i = 0; i < cantDelanteros; i++){
        delanteros[i].mostrarinfo();
    }
}
// Fin de la implementacion de los metodos de la clase Equipo.
