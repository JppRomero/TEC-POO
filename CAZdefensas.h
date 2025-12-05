// CAZdefensas.h el cual contiene la definicion
// de la clase CAZdefensas
// que hereda de la clase Jugador,
// agregando atributos y metodos
// especificos para los defensas.

#ifndef CAZDEFENSAS_H_
#define CAZDEFENSAS_H_
// Inclusiones necesarias.
#include <iostream>
#include <string>
#include "Jugador.h"

using namespace std;

// Definicion de la clase CAZdefensas,
// el cual hereda de la clase Jugador.

class CAZdefensas: public Jugador{
// Atributos privados especificos de los defensas.
private:
    int balonesbloqueados;
// Ponemos los metodos publicos de la clase CAZdefensas.
public:
    // Constructor el cual inicializa los atributos.
    CAZdefensas(string nm = "", int dj = 0, int bb = 0);

    // Creamos el Setter necesario.
    void setBalonesBloqueados(int bb);

    // Creamos el Getter necesario.

    int getBalonesBloqueados();

    // Creamos el metodo para mostrar
    // la informacion del defensa.

    void mostrarinfo();
};
// Fin de la definicion de la clase CAZdefensas.
#endif // CAZDEFENSAS_H_
