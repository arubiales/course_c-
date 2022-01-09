#include <iostream>
using namespace std;

int main(){
    int x, y, resultado = 1;

    cout<<"Introduzca un valor para ser elevado: "; cin>>x;
    cout<<"Introduzca un valor al que elevarlo: "; cin>>y;

    for(int i=0; i<y; i+=1){
        resultado *=x;
    }

    cout<<resultado<<endl;

    return 0;
}