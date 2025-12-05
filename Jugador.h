// Jugador.h el cual es la clase base 
// para los diferentes tipos de jugadores
// el cual contiene atributos comunes como nombre 
// y dorsal, asi como metodos para
// establecer y obtener estos atributos, y 
// un metodo para mostrar la informacion del jugador.

#ifndef JUGADOR_H_
#define JUGADOR_H_
// Inclusiones necesarias
#include <iostream>
#include <string>
using namespace std;
// Definicion de la clase Jugador

class Jugador{
// Atributos los cuales son protegidos para 
// seguir el principio de encapsulamiento y herencia.
protected:
    string nombrejug;
    int dorsaljug;
// Metodos publicos.

public:
    // Constructor el cual inicializa los atributos.
    Jugador (string nm = "", int dj = 0);
    
    // Creamos los Setters necesarios.
    void setNombres(string nm);

    void setDorsal(int dj);

    // Creamos los Getters necesarios.
    string getNombres();
    int getDorsal();
    
    // Creamos el metodo para mostrar 
    // la informacion del jugador.

    void mostrarinfo();
};
// Fin de la definicion de la clase Jugador
#endif // JUGADOR_H_
