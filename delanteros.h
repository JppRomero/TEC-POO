#include <iostream>
#include <string>
using namespace std;

// Delanteros del Cruz Azul
class CAZdelanteros {

private:
    string nombrejug;
    int dorsaljug;
    int goles;

public:
    // Constructor 
    CAZdelanteros (string nm = "", int dj = 0, int g = 0)
    : nombrejug(nm), dorsaljug(dj), goles(g){}

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

    void setGoles(int g){
        if (g >= 0)
            goles =  g;
        else
            cout << "Los Goles no pueden ser negativos" << endl;
    }

    // Get

    string getNombres() const {
        return nombrejug;
    }

    int getDorsal() const {
        return dorsaljug;
    }

    int getGoles() const {
        return goles;
    }

    // Mostrar Info

    void mostrarinfo() const{
        cout << "\n ---Delanteros Del Cruz Azul---" << endl;
        cout << "Nombre del Delantero : " << nombrejug << endl;
        cout << "Dorsal del Delantero : " << dorsaljug << endl;
        cout << "Los Goles de " << nombrejug 
        << " Son de : " << goles << endl;
    }
};