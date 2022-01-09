#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>

using namespace std;

class Alumno{   

    private:
        string nombre_carrera;

    public: 
        Alumno(string nombre_carrera){
            this->nombre_carrera = nombre_carrera;
        }

        ~Alumno(){

        }

        void mostrar_datos(){
            cout<<nombre_carrera<<endl;
        }

        string get_nombre_carrera(){
            return nombre_carrera;
        }

        void set_nombre_carrera(string n){
            this->nombre_carrera = n;
        }
};

#endif