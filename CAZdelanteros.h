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
    CAZdelanteros(): Jugador("", 0), goles(0){}
    CAZdelanteros (string nm, int dj, int g)
    :Jugador (nm,dj), goles(g){}

    // Set

    void setGoles(int g){
        if (g >= 0)
            goles =  g;
        else
            cout << "Los Goles no pueden ser negativos" << endl;
    }

    // Get

    int getGoles(){
        return goles;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n Delantero Del Cruz Azul" << endl;
        Jugador :: mostrarinfo();
        cout << "Los Goles del Jugador son de : " << goles << endl;
    }
};
#endif // CAZDELANTEROS_H_
