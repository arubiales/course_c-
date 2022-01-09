#include <iostream>

using namespace std;

void intercambio(int&, int&);

int main(){
    int num1=10, num2=15;

    intercambio(num1, num2);

    cout<<"Se han intercambiado los números: "<< num1<<' '<<num2<<endl;

    return 0;
}


void intercambio(int& n1, int& n2){
    int aux;

    aux = n1;
    n1 = n2;
    n2 = aux;
}