#include <iostream>

using namespace std;

int main(){
    int m_vect[5] = {1,2,3,4,5}; //definimos que tiene 5 elementos,aquí no cuenta el 0
    int resultado = 1;

    for(int i=0; i<5; i+=1){
        resultado *= m_vect[i];
    }

    cout<<resultado<<endl;

    return 0;
}