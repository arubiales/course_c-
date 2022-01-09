#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numeros; //creamos un vector de enteros, como es una plantilla, podríamos cambiar el tipo de dato a lo que queramos

    numeros.push_back(5); //AGREGAMOS ELEMENTOS
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(20);
    numeros.push_back(25);

    //Modificamos un número
    numeros[2] = 15;

    //Mostramos los elementos del arreglo
    for(int i=0; i<numeros.size(); i++){
        cout<<numeros[i]<<"|";
    }

    cout<<endl;

    //eliminamos el último elemento
    numeros.pop_back();

    for(int i=0; i<numeros.size(); i++){
        cout<<numeros[i]<<"|";
    }

    cout<<endl;

    //eliminamos los número de la posción 1 a la 3
    numeros.erase(numeros.begin()+ 1, numeros.begin()+2);

    for(int i=0; i<numeros.size(); i++){
        cout<<numeros[i]<<"|";
    }


    cout<<endl;

    vector<int> numeros2(5); //creamos un vector de enteros, como es una plantilla, podríamos cambiar el tipo de dato a lo que queramos
    
    numeros2[0] = 5; //AGREGAMOS ELEMENTOS definiendo la posición
    numeros2[1] = 10;
    numeros2[2] = 15;
    numeros2[3] = 20;

    //Mostramos los elementos del arreglo
    for(int i=0; i<numeros2.size(); i++){
        cout<<numeros2[i]<<"|";
    }


    return 0;
}