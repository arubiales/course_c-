#include<iostream>
using namespace std;

class Avion{
    private:
        string modelo;

    public:
        Avion(string modelo){
            this->modelo = modelo;
        }

        ~Avion(){

        }

        void indicar_avion(){
            cout<<"Desplazamiento por aire"<<endl;
        }

        string get_modelo(){
            return modelo;
        }
};