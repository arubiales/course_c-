#include <iostream>

using namespace std;

int main(){
    char string1[4] = {'a','b','c','d'}, string2[3] = {'z','x','y'}, almacen[7];

    for(int i=0; i<4; i+=1){
        almacen[i] = string1[i];
    }

    for(int c=4; c<7; c+=1){
        almacen[c] = string2[c-4];
    }

    for(int z=0; z<7; z+=1){
        cout<<almacen[z]<<endl;
    }

    return 0;
}