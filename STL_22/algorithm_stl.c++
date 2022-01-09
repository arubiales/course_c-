#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>
using namespace std;

int numeros_aleatorios(){
    return rand()%10; //retornamos número aleatrorios entre el 1 y el 10
}

int main(){
    list<int> valores(10);
    //Generamos números aleatorios en un rango de la lista
    generate(valores.begin(), valores.end(), numeros_aleatorios);

    //salida de datos que muestra valores enteros por pantalla, esto tan solo es el objeto iterador
    ostream_iterator<int> salida(cout, "|");

    //usamos copy y  copiamos los valores hacia la salida
    copy(valores.begin(), valores.end(), salida);


    //Buscamos un elemento en nuestra lista. Por ejemplo la primera aparición del 8
    list<int>::iterator i;
    i = find(valores.begin(), valores.end(), 7); //de algorithm buscamos desde el inicio de la lista hasta el final, hasta cuando encuentra la primera. Esto retorna un iterador

    //Analizamos si el valor de i no sobrepasa los rangos de la lista
    if(i != valores.end()){
        cout<<"El elemento "<<*i<<" si ha sido encontrado en la lista "<<endl;
    }
    else{
        cout<<"El elemento no ha sido encontrado"<<endl;
    }

    return 0;

}