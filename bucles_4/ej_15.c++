#include <iostream>
#include <stdlib.h>
#include<time.h>
#include <random>
using namespace std;


int main(){
    int n, rand_num, mayor = 100, menor = 0, intentos = 0;
    char ingreso, adivinado;

    cout<<"Ingrese un número: "; cin>>n;

    srand(time(NULL));
    rand_num = 1 + rand()%100;

    while(rand_num != n){
        intentos += 1;
        cout<<rand_num<<" es el número que usted a escrito. En el caso de que así sea, escriba 'Y', de lo contrario, escriba 'N': "; cin>>adivinado;
        
        if(adivinado=='N'){
            cout<<"Escriba 'M' para indicar que el número que usted a ingresado es mayor o 'm' para indicar que es menor"; cin>>ingreso;

            if(ingreso == 'M'){
                menor = rand_num;
            }
            else{
                mayor = rand_num;
            }
            rand_num = rand(menor, mayor);
        }
        else{
            cout<<"Enhorabuena hemos adivinado su número nos llevo los siguientes intentos: "<<intentos<<endl;
        }
    }
}