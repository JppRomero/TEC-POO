// Herencia para los Defensas del Cruz Azul
#ifndef CAZDEFENSAS_H_
#define CAZDEFENSAS_H_

#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// Defensas del Cruz Azul
class CAZdefensas: public Jugador{

private:
    int balonesbloqueados;

public:
    // Constructor
    CAZdefensas(string nm = "", int dj = 0, int bb = 0);

    // Set
    void setBalonesBloqueados(int bb);

    // Get

    int getBalonesBloqueados();
    // Mostrar Info

    void mostrarinfo();
};
#endif // CAZDEFENSAS_H_
