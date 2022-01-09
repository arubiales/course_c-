#include <iostream>

using namespace std;

int main(){
    int vector[5], mayor = -99999;

    for(int i=0; i<=5; i+=1){
        cout<<"Digite un número: "; cin>>vector[i];
    }

    for(int i=0; i<=5; i+=1){
        if(vector[i] > mayor){
            mayor = vector[i];
        }
    }
    
    cout<<"El número mayour es: "<<mayor<<endl;

    return 0;
}