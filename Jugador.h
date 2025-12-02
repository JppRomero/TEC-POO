// Clase base Jugador.h la cual contiene los atributos y metodos comunes
// y se usa como clase base para la herencia en los diferentes tipos de jugadores.

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
#include <string>
using namespace std;
// Clase Base Jugador 

class Jugador{

protected:
    string nombrejug;
    int dorsaljug;
public:
    // constructor
    Jugador (string nm = "", int dj = 0);
    
    // Set
    void setNombres(string nm);

    void setDorsal(int dj);

    // Get

    string getNombres();
    int getDorsal();
    
    // Mostrar Info

    void mostrarinfo();
};

#endif // JUGADOR_H_
