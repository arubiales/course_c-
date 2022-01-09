#include<iostream>

using namespace std;

int main(){
    float temp, mayor = 0, menor= 999, sumaTotal, promedio;

    for(int i=0; i<24; i+=4){
        cout<<"Digite la temperatura de la hora: "<<i; cin>>temp;

        sumaTotal +=temp;

        if(temp > mayor){
            mayor = temp;
        }
        if(temp<menor){
            menor = temp;
        }

    }

    promedio = sumaTotal / 6;

    cout<<"\nTemperatur Promedio: "<<promedio<<endl;
    cout<<"\nTemperatura más alta: "<<mayor<<endl;
    cout<<"\nTemperatura más baja: "<<menor<<endl;

    return 0;
}