#include <iostream>

using namespace std;


int main(){
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    //asi le pasamos la dirección en memoria de un vector
    dir_numeros = numeros;

    for(int i=0; i<5; i+=1){
        cout<<"Elemento del vector["<<i<<"]: " <<dir_numeros++<<endl; //de esta forma aumenta 4 bytes y pasa de una posición de memoria a la siguiente
    }
}