#include<iostream>
#include<fstream>
#include<iterator> //sirve para streams
#include<vector>

using namespace std;

int main(){
    ifstream archivo;

    archivo.open("documento.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit();
    }

    istream_iterator<char> p(archivo); //creamos un iteradorq que señala el inicio del archivo
    vector <char> frase;

    while(!archivo.eof()){
        frase.push_back(*p);
        p++;
    }

    //Mostramos el vector frase
    for(int i=0; i<frase.size(); i++){
        cout<<frase[i];
    }
    cout<<endl;

    archivo.close();

    return 0;
}