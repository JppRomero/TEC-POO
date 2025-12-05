// CAZdelanteros.h el cual contiene la definicion
// de la clase CAZdelanteros
// que hereda de la clase Jugador,
// agregando atributos y metodos
// especificos para los delanteros.

#ifndef CAZDELANTEROS_H_
#define CAZDELANTEROS_H_
// Inclusiones necesarias.
#include <iostream>
#include <string>
#include "Jugador.h"
using namespace std;

// Definicion de la clase CAZdelanteros, 
// el cual hereda de la clase Jugador.

class CAZdelanteros: public Jugador{
// Atributos privados especificos de los delanteros.
private:
    int goles;
// Ponemos los metodos publicos de la clase CAZdelanteros.
public:
    // Constructor el cual inicializa los atributos.
    CAZdelanteros (string nm = "", int dj = 0, int g = 0);

    // Creamos el Setter necesario.

    void setGoles(int g);

    // Creamos el Getter necesario.

    int getGoles();

    // Creamos el metodo para mostrar
    // la informacion del delantero.

    void mostrarinfo();
};
// Fin de la definicion de la clase CAZdelanteros.
#endif // CAZDELANTEROS_H_
