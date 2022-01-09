#include <iostream>

using namespace std;

int main(){
    int vector[5]={1,1,1,3,1}, comparador, suma_menos_uno = 0, es_real_suma = 0;

    for(int i=0; i<=4; i+=1){
        comparador = vector[i];
        vector[i] = 0;
        for(int c=0; c<=4; c+=1){
            suma_menos_uno += vector[c];
            
        }
        vector[i] = comparador;
        if(suma_menos_uno == comparador){
            es_real_suma = 1;
        }
        suma_menos_uno = 0;
    }



    if(es_real_suma == 1){
        cout<<"Este vector contiene un número, que es suma de todos los demás"<<endl;
        }
    else{
        cout<<"Este vector NO contiene un número, que sea suma de todos los demás"<<endl;
    }

    return 0;
}
