#include<iostream>
using namespace std;

template <class T1, class T2>

class EjemploPlantila{

    private:
        T1 dato1;
        T2 dato2;

    public:
        EjemploPlantila(T1 dato1, T2 dato2){
            this->dato1 = dato1;
            this->dato2 = dato2;
        }

        void set_dato1(T1 dato1){
            this->dato1 = dato1;
        }
        
        T1 get_dato1(){
            return dato1;
        }

        T2 get_dato2(){
            return dato2;
        }

        void set_dato2(T2 dato2){
            this->dato2 = dato2;
        }

        void mostrar_datos(){
            cout<<"Dato 1 = "<<dato1<<endl;
            cout<<"Dato 2 = "<<dato2<<endl; 
        }
};