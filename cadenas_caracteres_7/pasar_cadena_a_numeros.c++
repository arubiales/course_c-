#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(){
    char cad[] = "123", cad2[]="1323.563";
    int numero;
    float numero2;

    numero = atoi(cad);
    numero2 = atof(cad2);

    cout<<numero<<endl;
    cout<<numero2<<endl;

    
    return 0;
}