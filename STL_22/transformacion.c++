#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

//Función para pasar las letras a mayusculas
void mayuscula(char &letra){
    if(letra>='a' && letra<='z'){
        letra = letra - ('a' - 'A');
    }
}

//función buscar vocales
char vocales(char letra){
    return (letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U') ? letra : '-';
}


int main(){
    vector<char> letras;

    //Generamos letras para el vector
    for(int i=0;i<10; i++){
        letras.push_back('a'+i);
    }

    
    copy(letras.begin(),letras.end(), ostream_iterator<char> (cout,"|")); cout<<endl;

    //Desordenamos nuestro vector de letras
    random_shuffle(letras.begin(), letras.end());
    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout, "|")); cout<<endl;

    //Pasamos a mayusculas
    for_each(letras.begin(), letras.end(), mayuscula);
    copy(letras.begin(), letras.end(), ostream_iterator<char> (cout, "|")); cout<<endl;

    //Buscamoss las vocales y los mostramos
    transform(letras.begin(), letras.end(), ostream_iterator<char> (cout, "|"), vocales);


    return 0;
}