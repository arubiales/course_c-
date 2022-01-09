#include <iostream>
#include <iterator>
#include <map>

using namespace std;


//Crear un alias, por ejemplo para el paair
typedef pair<int,string> par;

int main(){
    map<int, string> valores;

    //un diccionario

    //insertamos
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Fatima"));
    valores.insert(par(1, "Juan"));
    valores.insert(par(3, "Estefan"));
    valores.insert(par(2, "muerte")); //No se inserta por repetirse

    //Mostrar el map en pantalla
    map<int, string>::iterator i;
    for(i=valores.begin();i != valores.end(); i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    }
    cout<<endl;

    //Modificamos la clave
    valores[1] = "Lusiato";

    for(i=valores.begin();i != valores.end(); i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    } 

    i = valores.find(2);

    if(i!=valores.end()){
        cout<<"Valor encontrado."<<endl<<endl;
    }
    else{
        cout<<"Valor no encontrado"<<endl<<endl;
    }

    valores.erase(2);

    for(i=valores.begin();i != valores.end(); i++){
        cout<<"Clave: "<<i->first<<" | Valor: "<<i->second<<endl;
    } 
    cout<<endl<<endl;
    // UN MULTIMAP
    cout<<"UN MULTIMAP"<<endl<<endl;

    multimap<int,string> valores2;

    valores2.insert(par(3,"Macarena"));
    valores2.insert(par(1, "Luis"));
    valores2.insert(par(5, "Alejandro"));
    valores2.insert(par(2, "María"));

    multimap<int,string>::iterator z;
    for(z=valores2.begin(); z!=valores2.end(); z++){
        cout<<"Clave: "<<z->first<<" | Valor: "<<z->second<<endl;
    }

    cout<<endl;
     //Es igual que el set

    return 0;
}