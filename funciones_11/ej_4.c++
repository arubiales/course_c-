#include <iostream>

using namespace std;

//prototipo de funciones
void pedir_numero();
float parte_frac(float n);

float n;

int main(){
    
    pedir_numero(); 

    cout<<parte_frac(n)<<endl;

    return 0;
}


void pedir_numero(){
    cout<<"Digite un número: "; cin>>n;
}

float parte_frac(float n){
    int entero = n;

    return n - entero;
}