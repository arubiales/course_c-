#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<cstdlib>

using namespace std;

//Función valores aleatorios
int numeros_aleatorios(){
    return rand()%30;
}

template <class T>

bool es_par(T valor){
    return ((valor&2) == 0);
}

int main(){
    vector<int> valores(10);

    generate(valores.begin(), valores.end(), numeros_aleatorios);

    //Mostrando en pantalla el vector
    copy(valores.begin(), valores.end(),ostream_iterator<int> (cout, "|"));

    //Queremos guardar solo los elementos pares en este vector
    vector<int> pares;

    //Iterador paar recorrer el vector valroes
    vector<int>::iterator i = valores.begin();

    while((i=find_if(i, valores.end(), es_par<int>)) != valores.end()){
        pares.push_back(*i);
        i++;
    }

    cout<<endl;
    //Mostramos el vector pares en pantalla
    copy(pares.begin(), pares.end(), ostream_iterator<int> (cout, "|"));

    //Ahora lo ordenamos
    cout<<endl<<"Ordenamos con sort"<<endl;
    sort(pares.begin(), pares.end());

    copy(pares.begin(), pares.end(), ostream_iterator<int> (cout, "|"));
    return 0;
}