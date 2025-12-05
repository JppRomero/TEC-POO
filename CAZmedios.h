// CAZmedios.h el cual contiene la definicion
// de la clase CAZmedios
// que hereda de la clase Jugador,
// agregando atributos y metodos
// especificos para los mediocampistas.

#ifndef CAZMEDIOS_H_
#define CAZMEDIOS_H_
// Inclusiones necesarias.
#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// Definicion de la clase CAZmedios, 
// el cual hereda de la clase Jugador.

class CAZmedios: public Jugador{
// Atributos privados especificos de los mediocampistas.
private:
    int pases;
// Ponemos los metodos publicos de la clase CAZmedios.
public:
    // Constructor el cual inicializa los atributos.
    CAZmedios (string nm = "", int dj = 0, int p = 0);

    // Creamos el Setter necesario.
    void setPases(int p);

    // Creamos el Getter necesario.
    int getPases();

    // Creamos el metodo para mostrar
    // la informacion del mediocampista.

    void mostrarinfo();
};
// Fin de la definicion de la clase CAZmedios.
#endif // CAZMEDIOS_H_
