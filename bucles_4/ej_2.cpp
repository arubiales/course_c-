#include <iostream>

using namespace std;

int main(){
    float n, conteo = 0;

    while(n!=0){
        cout<<"Introduzca un número: "<<endl; cin>>n;

        if(n>0){
            conteo += 1;
        }
    }

    cout<<"El número de valores mayores que 0 introducidos son: "<<conteo<<endl;


    return 0;
}