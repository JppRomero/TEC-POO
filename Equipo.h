// Equipo.h el cual es la composicion del equipo Cruz Azul,
// contiene arreglos de los diferentes tipos de jugadores
// y metodos para agregar jugadores y mostrar la informacion del equipo.

#ifndef EQUIPO_H_
#define EQUIPO_H_

#include <iostream>
#include <string>
#include "CAZporteros.h"
#include "CAZdefensas.h"
#include "CAZmedios.h"
#include "CAZdelanteros.h"

using namespace std;

class Equipo {
// Atributos: arreglos para cada tipo de jugador
private:
    CAZporteros porteros[3];
    int cantPorteros;

    CAZdefensas defensas[7];
    int cantDefensas;

    CAZmedios medios[13];
    int cantMedios;

    CAZdelanteros delanteros[3];
    int cantDelanteros;

public:
    // constructor
    Equipo();
    // Metodos para agregar a los jugadores
    void agregarPortero(string nm, int dj, int bp);

    void agregarDefensa(string nm, int dj, int bb);

    void agregarMedio(string nm, int dj, int p);

    void agregarDelantero(string nm, int dj, int g);

    // Mostramos a todo el equipo
    void mostrarEquipo();
};
#endif // EQUIPO_H_
