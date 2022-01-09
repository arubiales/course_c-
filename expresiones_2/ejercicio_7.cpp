#include <iostream>
using namespace std;

int main(){
    float nota_practicas, nota_teorica, nota_participacion, nota_final = 0;

    cout<<"Nota de prácticas: "; cin>>nota_practicas;
    cout<<"Nota de teoría: "; cin>>nota_teorica;
    cout<<"Nota de participación: "; cin>>nota_participacion;

    nota_final = nota_practicas * 0.3 + nota_teorica * 0.6 + nota_participacion * 0.1;

    cout<<"Resultado final: "<<nota_final<<endl;

    return 0;
}