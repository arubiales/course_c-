#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    set<int> valores;

    //SET
    //-----------------------------------------------
    //insertamos valores
    valores.insert(5);
    valores.insert(10);
    valores.insert(3);
    valores.insert(15);
    valores.insert(1);
    valores.insert(10);
    valores.insert(11);

    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));cout<<endl;

    //busqueda de un elemento
    set<int>::iterator i = valores.find(2);

    if(i!= valores.end()){
        cout<<"El elemento "<<*i<<" si ha sido encontrado"<<endl;
    }
    else{
        cout<<"\nEl elemnto no ha sido encontrado";
    }
    cout<<endl;
    valores.erase(1);
    copy(valores.begin(), valores.end(), ostream_iterator<int> (cout, "|"));


    //Multiset
    //----------------------------------------------------------------------------------------
    //la diferencia es que se pueden crear claves duplicadas
    cout<<endl<<endl<<"MULTISET"<<endl;
    multiset<int> valores2;

    valores2.insert(10);
    valores2.insert(2);
    valores2.insert(12);
    valores2.insert(7);
    valores2.insert(8);
    valores2.insert(9);
    valores2.insert(10);
    valores2.insert(10);

    //Mostrar en pantalla
    copy(valores2.begin(), valores2.end(), ostream_iterator<int> (cout, "|"));
    cout<<endl;

    multiset<int>::iterator z = valores2.find(2);

    if(z != valores2.end()){
        cout<<"Elemento encontrado";
    }
    else
    {
        cout<<"Elemento no encontrado";
    }
    
    cout<<endl<<endl;
    cout<<"Algo que podemos hacer en un multiset, es un conteo. Por ejemeplo cuantas veces aparece el número 10"<<endl<<endl;

    cout<<"El número 10 aparece "<<valores2.count(10)<<endl<<endl;

    cout<<"Eliminamos los elementos iguales al seleccionado"<<endl;

    //eliminar un elemento del multiset
    valores2.erase(10);

    copy(valores2.begin(), valores2.end(), ostream_iterator<int> (cout, "|"));

    return 0;
}