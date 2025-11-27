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
    CAZdefensas(): Jugador("", 0), balonesbloqueados(0){}
    CAZdefensas(string nm, int dj, int bb)
    :Jugador(nm, dj), balonesbloqueados (bb){}

    // Set
    void setBalonesBloqueados(int bb){
        if (bb >= 0)
            balonesbloqueados =  bb;
        else
            cout << "Los balones bloqueados no pueden ser negativos" << endl;
    }

    // Get

    int getBalonesBloqueados(){
        return balonesbloqueados;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n Defensa Del Cruz Azul" << endl;
        Jugador :: mostrarinfo();
        cout << "Los Balones Bloqueados son : " << balonesbloqueados << endl;
    }
};
#endif // CAZDEFENSAS_H_
