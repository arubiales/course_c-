#include <iostream>

using namespace std;

int escribe_numeros(int, int);

int main(){
    int ini, fin;

    cout<<"Digite un inicio: "; cin>>ini;
    cout<<"Digite un final: "; cin>>fin;

    for(int i=ini; i<fin; i+=1){
        cout<<escribe_numeros(i, fin);
    }

    return 0;
}

int escribe_numeros(int ini, int fin){
    if(ini == fin){
        return ini;
    }
    else{
        return escribe_numeros(ini, fin-1);
    }
}


