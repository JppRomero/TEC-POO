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
    CAZmedios(): Jugador("", 0), pases(0){}
    CAZmedios (string nm, int dj, int p)
    :Jugador(nm, dj), pases(p){}

    // Set
    void setPases(int p){
        if (p >= 0)
            pases =  p;
        else
            cout << "Los Pases no pueden ser negativos" << endl;
    }

    // Get
    int getPases(){
        return pases;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n Medio Del Cruz Azul" << endl;
        Jugador :: mostrarinfo();
        cout << "Los Pases del Jugador son de : " << pases << endl;
    }
};
#endif // CAZMEDIOS_H_
