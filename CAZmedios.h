// Herencia para los Mediocampistas del Cruz Azul

#ifndef CAZMEDIOS_H_
#define CAZMEDIOS_H_

#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// MedioCampistas del Cruz Azul
class CAZmedios: public Jugador{

private:
    int pases;

public:
    // Constructor 
    CAZmedios (string nm = "", int dj = 0, int p = 0);

    // Set
    void setPases(int p);

    // Get
    int getPases();

    // Mostrar Info

    void mostrarinfo();
};
#endif // CAZMEDIOS_H_
