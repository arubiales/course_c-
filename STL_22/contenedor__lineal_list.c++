#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> datos;

    //agregar elementos por el final
    datos.push_back(5);
    datos.push_back(1);
    datos.push_back(6);

    //agregar elementos por el principio
    datos.push_front(2);
    datos.push_front(7);
    
    //ordenar elementos
    datos.sort();

    //creamos el iterador para poder recorrer toda nuestra lista
    list<int>::iterator i;


    //Mostramos los datos
    i = datos.begin();

    while(i !=datos.end()){
        cout<< *i<<"|";
        i++;
    }


    cout<<endl;
    //Eliminamos elementos de la lista por el final
    datos.pop_back();

    //Eliminamos por el principio
    datos.pop_front();

    i = datos.begin();

    while(i !=datos.end()){
        cout<< *i<<"|";
        i++;
    }


    cout<<endl;

}