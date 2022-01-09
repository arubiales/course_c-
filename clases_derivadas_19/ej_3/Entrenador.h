#include <iostream>
#include "Persona.h"

using namespace std;


class Entrenador : public Persona{

    private:
        string estrategia;

    public:
        Entrenador(string nombre, string apellido, int edad, string estrategia) : Persona(nombre, apellido, edad){
            this->estrategia = estrategia;
        }
        ~Entrenador(){

        }

    void entrenamiento(){
        cout<<"Entrenador entrenando"<<endl;
    }

    void viaje_equipo(){
        cout<<"Entrenador viajando"<<endl;
    }
    
    void partido(){
        cout<<"Entrenador jugando"<<endl;
    }

    void planificar_entrenamiendo(){
        cout<<"Entrenador planificando entrenamiento"<<endl;
    }

};