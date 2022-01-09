#include <iostream>
#include "Arreglo.h"

using namespace std;

void menu(){
    cout<<"\t.:Menu:."<<endl;
    cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
    cout<<"2. Comprobar el espacio en el arreglo"<<endl;
    cout<<"3. Ver arreglo"<<endl;
    cout<<"4. Vaciar arreglo"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Introduzca una opción de menu: "<<endl;

}

int main(int argc, char** argv){
    Arreglo <int> arreglo1(4);
    int opt;
    int elemento;

    do{
        opciones();
        cin>>opt;

        switch(opt){
            case 1: 
                    if(arreglo1.arreglo_lleno()){
                        cout<<"\nEl arreglos está lleno"<<endl;
                    }
                    else{
                        cout<<"Introduzca un elemento"; cin>>elemento
                        arreglo1.agregar(elemento);
                    }
                    break;
            case 2:
                    if(arreglo1.arreglo_lleno()){
                        cout<<"\nEl arreglos está lleno"<<endl;
                    }
                    else{
                        cout<<"\nEl arreglo NO está lleno"<<endl;
                    }
                    break;
            case 3:
                    arreglo1.mostrar_arreglo();
                    break;
            case 4:
                    arreglo1.vaciar_arreglo(); 
                    break;
            case 5: break;
            default: cout<<"Se equivoco de opción de menu"<<endl;
        }
    }while(opt !=5);

}