#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

template <class Iter>
void mostrar_en_pantalla(Iter inicio, Iter final){
    while(inicio !=final){
        cout<<*inicio<<"|";
        inicio++;
    }
}

int main(){
    vector<char> letras(10); //creando el vector de 10 elementos char

    //agregando elementos aleatorios al vector
    for(int i=0; i<10; i++){
        letras[i] = 'A' + (rand() % 26);
    }

    //visualizamos los elementos
    mostrar_en_pantalla(letras.begin(), letras.end());


    cout<<endl;
    //visualizamos al reves
    mostrar_en_pantalla(letras.rbegin(), letras.rend());

    cout<<endl;

    //visualizamos del medio
    mostrar_en_pantalla(letras.begin()+1, letras.end()-1);
    cout<<endl;

    return 0;
}