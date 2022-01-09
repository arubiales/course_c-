//Implementación de la clase Persona

#include<iostream>
using namespace std;

class Persona{
    //atributos
    private:
        string nombre;
        int edad;
        string dni;

    public: 
        Persona(string _nombre, int _edad){ //constructor 1
            nombre = _nombre;
            edad = _edad;
        }

        Persona(string _dni){ //constructor 2
            dni = _dni;
        }

        //Esto pasado es la sobrecarga, c++ nunca se confundirá, porque estos métodos tienen un número distinto de parámetros

        void correr(){
            cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy corriendo una maratón";
        }

        void correr(int km){
            cout<<"He corrido "<<km<<" kilometros"<<endl;
        }

};