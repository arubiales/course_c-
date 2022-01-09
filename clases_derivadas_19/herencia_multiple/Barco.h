#include<iostream>
using namespace std;


class Barco{
    private:
        string nombre;

    public:
        Barco(string nombre){
            this->nombre = nombre;
        }

        ~Barco(){
            
        }
        
        void indicar_barco(){
            cout<<"Desplazamiento por agua"<<endl;
        }

        string get_nombre(){
            return nombre;
        }
    
};