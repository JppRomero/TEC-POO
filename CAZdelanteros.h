// Herencia para los Delanteros del Cruz Azul
#ifndef CAZDELANTEROS_H_
#define CAZDELANTEROS_H_

#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;

// Delanteros del Cruz Azul
class CAZdelanteros: public Jugador{

private:
    int goles;

public:
    // Constructor 
    CAZdelanteros (string nm = "", int dj = 0, int g = 0);

    // Set

    void setGoles(int g);

    // Get

    int getGoles();

    // Mostrar Info

    void mostrarinfo();
};
#endif // CAZDELANTEROS_H_
