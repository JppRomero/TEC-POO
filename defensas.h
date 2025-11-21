#include <iostream>
#include <string>
using namespace std;

// Defensas del Cruz Azul
class CAZdefensas {

private:
    string nombrejug;
    int dorsaljug;
    int balonesbloqueados;

public:
    // Constructor 
    CAZdefensas (string nm = "", int dj = 0, int bb = 0)
    : nombrejug(nm), dorsaljug(dj), balonesbloqueados(bb){}

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

    void setBalonesBloqueados(int bb){
        if (bb >= 0)
            balonesbloqueados =  bb;
        else
            cout << "Los balones bloqueados no pueden ser negativas" << endl;
    }

    // Get

    string getNombres(){
        return nombrejug;
    }

    int getDorsal(){
        return dorsaljug;
    }

    int getBalonesBloquedos(){
        return balonesbloqueados;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n ---Defensa Del Cruz Azul---" << endl;
        cout << "Nombre del Defensa : " << nombrejug << endl;
        cout << "Dorsal del Defensa : " << dorsaljug << endl;
        cout << "Los Balones Bloqueados de " << nombrejug 
        << " Son de : " << balonesbloqueados << endl;
    }

};
