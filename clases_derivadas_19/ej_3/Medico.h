#include <iostream>
#include "Persona.h"

using namespace std;

class Medico : public Persona{

    private:
        string titulacion;
        int anos_exp;

    public:
        Medico(string nombre, string apellido, int edad, string titulacion, int anox_exp) : Persona(nombre, apellido, edad){
            this->titulacion = titulacion;
            this->anos_exp = anos_exp;
        }

        ~Medico(){
        
        }

    void entrenamiento(){
        cout<<"Medico entrenando"<<endl;
    }

    void viaje_equipo(){
        cout<<"Medico viajando"<<endl;
    }
    
    void partido(){
        cout<<"Medico jugando"<<endl;
    }

    void curar_lesion(){
        cout<<"Médico curando lesión"
    }

}