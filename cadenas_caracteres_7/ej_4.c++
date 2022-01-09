#include <iostream>
#include <string.h>

using namespace std;


int main(){
    char cad1[50]="¿Hola, qué tal? ", cad2[50] ="¿Cuál es tú nombre?", cad3[50];

    cout<<cad1<<endl;
    cout<<cad2<<endl;

    cin.getline(cad3, 50,'\n');
    strcat(cad1, cad3);
    
    cout<<cad1<<endl;

    return 0;
}