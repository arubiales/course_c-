#include <iostream>

using namespace std;

void intercambio(float *, float *); //Indicamos que usamos dos direcciones de memoria, donde hay 2 flotantes

int main(){
    float num1 = 20.8, num2=6.78;

    cout<<"Primer Número: "<<num1<<endl;
    cout<<"Segundo Número: "<<num2<<endl;

    intercambio(&num1, &num2);

    cout<<num1<<' '<<num2<<endl;


    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
    float aux;
    
    //intercambiamos los valores
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;

}