// Equipo.h el cual contiene la definicion
// de la clase Equipo, el cual es una composicion
// de diferentes tipos de jugadores (CAZporteros, CAZdefensas,
// CAZmedios, CAZdelanteros) y proporciona metodos  
// para agregar jugadores y mostrar la informacion del equipo.

#ifndef EQUIPO_H_
#define EQUIPO_H_
// Inclusiones necesarias.
#include <iostream>
#include <string>
#include "CAZporteros.h"
#include "CAZdefensas.h"
#include "CAZmedios.h"
#include "CAZdelanteros.h"

using namespace std;
// Definicion de la clase Equipo.
// el cual es la composicion de 
// diferentes tipos de jugadores.

class Equipo {
// Atributos privados de la clase Equipo.
private:
    CAZporteros porteros[3];
    int cantPorteros;

    CAZdefensas defensas[7];
    int cantDefensas;

    CAZmedios medios[13];
    int cantMedios;

    CAZdelanteros delanteros[3];
    int cantDelanteros;

// Ponemos los metodos publicos de la clase Equipo.
public:
    // Constructor de la clase Equipo.
    Equipo();
    // Creamos los metodos para agregar jugadores al equipo.
    void agregarPortero(string nm, int dj, int bp);

    void agregarDefensa(string nm, int dj, int bb);

    void agregarMedio(string nm, int dj, int p);

    void agregarDelantero(string nm, int dj, int g);

    // Creamos el metodo para mostrar la informacion del equipo.
    void mostrarEquipo();
};
// Fin de la definicion de la clase Equipo.
#endif // EQUIPO_H_
