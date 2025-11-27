// Clase base Jugador.h la cual contiene los atributos y metodos comunes
// y se usa como clase base para la herencia en los diferentes tipos de jugadores.

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
#include <string>
using namespace std;

class Jugador{

protected:
    string nombrejug;
    int dorsaljug;
public:
    // constructor
    Jugador (string nm = "", int dj = 0)
    : nombrejug(nm), dorsaljug(dj){}
    
    // Set
    void setNombres(string nm){
        nombrejug = nm;
    }

    void setDorsal(int dj){
        if (dj > 0 && dj <= 99)
            dorsaljug = dj;
        else
            cout << "El Dorsal Tiene que ser un Numero del 1 al 99" << endl;
    }

    // Get

    string getNombres(){
        return nombrejug;
    }

    int getDorsal(){
        return dorsaljug;
    }
    
    // Mostrar Info

    void mostrarinfo(){
        cout << "Nombre del Jugador: " << nombrejug << endl;
        cout << "Dorsal del Jugador: " << dorsaljug << endl;
    }
};

#endif // JUGADOR_H_