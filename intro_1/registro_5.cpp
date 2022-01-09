
#include <iostream>

using namespace std;

int main(){
    int edad;
    char sexo[10];
    float altura;

    cout << "Introduzca su edad: ";
    cin >> edad;

    cout << "Introduzca su sexo: ";
    cin >> sexo;

    cout << "Introduzca su altura: ";
    cin >> altura;

    cout<<"\nEdad: "<<edad<<endl;
    cout<<"Sexo: "<<sexo<<endl;
    cout<<"Altura en metros: "<<altura<<endl;

    return 0;
}