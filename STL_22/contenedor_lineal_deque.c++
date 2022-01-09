#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<char> letras;

    //agregamos las letras por delante
    letras.push_front('C');
    letras.push_front('B');
    letras.push_front('A');

    //Insertamos por el final igual que con el vector
    letras.push_back('D');
    letras.push_back('E');
    letras.push_back('F');

    //Mostramos los elementos
    for(int i=0;i<letras.size(); i++){
        cout<<letras[i]<<"|";
    }

    cout<<endl;
    //Eliminamos el primer elemento
    letras.pop_front();

    //Eliminamos un elemento por el final
    letras.pop_back();

    for(int i=0;i<letras.size(); i++){
        cout<<letras[i]<<"|";
    }

    return 0;
}