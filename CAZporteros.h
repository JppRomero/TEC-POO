// Herencia para los Porteros del Cruz Azul
#ifndef CAZPORTEROS_H_
#define CAZPORTEROS_H_

#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// Porteros del Cruz Azul
class CAZporteros: public Jugador{

private:
    int balonesparados;

public:
    // Constructor 
    CAZporteros(string nm = "", int dj = 0, int bp = 0);

    // Set
    void setBalonesParados(int bp);

    // Get
    int getBalonesParados();

    // Mostrar Info

    void mostrarinfo();
};
#endif // CAZPORTEROS_H_
