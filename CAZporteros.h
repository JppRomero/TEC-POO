// CAZporteros.h el cual contiene la definicion
// de la clase CAZporteros 
// que hereda de la clase Jugador,
// agregando atributos y metodos 
// especificos para los porteros.

#ifndef CAZPORTEROS_H_
#define CAZPORTEROS_H_
// Inclusiones necesarias.
#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// Definicion de la clase CAZporteros, 
// el cual hereda de la clase Jugador.

class CAZporteros: public Jugador{
// Atributos privados especificos de los porteros.
private:
    int balonesparados;
// Ponemos los metodos publicos de la clase CAZporteros.
public:
    // Constructor el cual inicializa los atributos.
    CAZporteros(string nm = "", int dj = 0, int bp = 0);

    // Creamos el Setter necesario.
    void setBalonesParados(int bp);

    // Creamos el Getter necesario.
    int getBalonesParados();

    // Creamos el metodo para mostrar 
    // la informacion del portero.

    void mostrarinfo();
};
// Fin de la definicion de la clase CAZporteros.
#endif // CAZPORTEROS_H_
