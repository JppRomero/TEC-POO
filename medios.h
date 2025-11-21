#include <iostream>
#include <string>
using namespace std;

// MedioCampistas del Cruz Azul
class CAZmedios {

private:
    string nombrejug;
    int dorsaljug;
    int pases;

public:
    // Constructor 
    CAZmedios (string nm = "", int dj = 0, int p = 0)
    : nombrejug(nm), dorsaljug(dj), pases(p){}

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

    void setPases(int p){
        if (p >= 0)
            pases =  p;
        else
            cout << "Los Pases no pueden ser negativos" << endl;
    }

    // Get

    string getNombres(){
        return nombrejug;
    }

    int getDorsal(){
        return dorsaljug;
    }

    int getPases(){
        return pases;
    }

    // Mostrar Info

    void mostrarinfo(){
        cout << "\n ---MedioCampistas Del Cruz Azul---" << endl;
        cout << "Nombre del MedioCampista : " << nombrejug << endl;
        cout << "Dorsal del MedioCampista : " << dorsaljug << endl;
        cout << "Los Pases de " << nombrejug 
        << " son de : " << pases << endl;
    }

};
