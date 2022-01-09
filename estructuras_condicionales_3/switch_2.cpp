#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"Digite un numero entre 1-5"; cin>>numero;

    // eSTA ES la sentencia switch, es como el case de sqk, el break lo que hace es que cuando encuentra el caso al que corresponde, se rompe el bucle y por tanto para ahí y no sigue con más casos.
    switch (numero)
    {
    case 1: cout<<"Es el número 1"; break;
    case 2: cout<<"Es el número 2"; break;
    case 3: cout<<"Es el número 3"; break;
    case 4: cout<<"Es el número 4"; break;
    default:cout<<"No esta en el rango de 1-5"; break;
    }
    return 0;
}

