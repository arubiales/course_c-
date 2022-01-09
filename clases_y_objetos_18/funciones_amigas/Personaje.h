#include<iostream>

using namespace std;

class Personaje{
    //Le decimos que es una función amiga
    friend void modificar(Personaje &, int, int);

    private:
        int ataque;
        int defensa;

    public:
        Personaje(int ataque, int defensa){
            this->ataque = ataque;
            this->defensa = defensa;
        }

        void mostrar_datos(){
            cout<<"Ataque = "<<ataque<<"\t";
            cout<<"Defensa = "<<defensa<<endl;
        }
};