#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

using namespace std;

class Persona{
    protected:
        string nombre, apellido;
        int edad;

    public:
        Persona(string nombre, string apellido, int edad){
            this->nombre = nombre;
            this->apellido = apellido;
            this->edad = edad;
        }
        ~Persona(){

        }

        virtual void partido()=0;
        virtual void entrenamiento()=0;
        virtual void viaje_equipo()=0;
};

#endif