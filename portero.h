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
    CAZporteros(): Jugador("", 0), balonesparados(0){}
    CAZporteros(string nm, int dj, int bp)
    :Jugador (nm, dj), balonesparados (bp){}

    // Set
    void setBalonesParados(int bp){
        if (bp >= 0)
            balonesparados =  bp;
        else
            cout << "Las Atajadas no pueden ser negativas" << endl;
    }

    // Get
    int getBalonesParados(){
        return balonesparados;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n Portero Del Cruz Azul" << endl;
        Jugador :: mostrarinfo();
        cout << "Las Atajadas del portero es de: "<< balonesparados << endl;
    }
};
#endif // CAZPORTEROS_H_
