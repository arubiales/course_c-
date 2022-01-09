#include <iostream>
#include "Persona.h"

using namespace std;

class Futbolista : public Persona{

    private:
        int dorsal;
        string posicion;

    public:
        Futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) : Persona(nombre, apellido, edad){
            this->posicion = posicion;
            this->dorsal = dorsal;
        }
        
        ~Futbolista(){
        }

    void entrenamiento(){
        cout<<"Futbolista entrenando"<<endl;
    }

    void viaje_equipo(){
        cout<<"Futbolista viajando"<<endl;
    }
    
    void partido(){
        cout<<"Futbolista jugando"<<endl;
    }

    void entrevista(){
        cout<<"Futbolista dando entrevista"<<endl;
    }



};