#include <iostream>

using namespace std;

//Esto es una función de tipo void, llamada ordanaciónshell()

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[], int n){
    int salto, i, j, k;
    salto = n/2;

    while(salto>0){
        for(i=salto; i<n; i+=1){
            j = i - salto;
            while(j>=0){
                k = j + salto;
                if(a[j] <= a[k]){
                    j = -1;
                }
                else{//par elementos desordenador
                    intercambio(a[j], a[k]); //esto es una función nuestra
                    j -= salto;
                }
            }
        }
        salto = salto/2;
    }
}



int main(){
    float arreglo[] = {4,6,1,9,5,10,11,19,20,13};

    ordenacionShell(arreglo, 10);

    cout<<"Arreglo ordenado: ";
    for(int i=0; i<10; i+=1){
        cout<<arreglo[i]<<' ';
    }


    return 0;
}
