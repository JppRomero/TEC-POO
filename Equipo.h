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
    Equipo() {
        cantPorteros = 0;
        cantDefensas = 0;
        cantMedios = 0;
        cantDelanteros = 0;
    }
    // Metodos para agregar a los jugadores
    void agregarPortero(string nm, int dj, int bp) {
        if (cantPorteros < 3) {
            porteros[cantPorteros] = CAZporteros(nm, dj, bp);
            cantPorteros++;
        }
    }

    void agregarDefensa(string nm, int dj, int bb) {
        if (cantDefensas < 7) {
            defensas[cantDefensas] = CAZdefensas(nm, dj, bb);
            cantDefensas++;
        }
    }

    void agregarMedio(string nm, int dj, int p) {
        if (cantMedios < 13) {
            medios[cantMedios] = CAZmedios(nm, dj, p);
            cantMedios++;
        }
    }

    void agregarDelantero(string nm, int dj, int g) {
        if (cantDelanteros < 3) {
            delanteros[cantDelanteros] = CAZdelanteros(nm, dj, g);
            cantDelanteros++;
        }
    }

    // Mostramos a todo el equipo
    void mostrarEquipo() {
        cout << "\n=== PORTEROS DEL CRUZ AZUL ===\n";
        for (int i = 0; i < cantPorteros; i++)
            porteros[i].mostrarinfo();

        cout << "\n=== DEFENSAS DEL CRUZ AZUL ===\n";
        for (int i = 0; i < cantDefensas; i++)
            defensas[i].mostrarinfo();

        cout << "\n=== MEDIOS DEL CRUZ AZUL ===\n";
        for (int i = 0; i < cantMedios; i++)
            medios[i].mostrarinfo();

        cout << "\n=== DELANTEROS DEL CRUZ AZUL ===\n";
        for (int i = 0; i < cantDelanteros; i++)
            delanteros[i].mostrarinfo();
    }
};
#endif // EQUIPO_H_