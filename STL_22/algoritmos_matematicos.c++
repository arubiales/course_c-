#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;
//hacemos un programa donde pasamos un texto a un vector



int main(){
    vector<float> numeros;

    //abrimos el archivo en modo lectura
    ifstream archivo("archivo.txt", ios::in);
    
    //copiamos los elementos del archivos hacia el vector números, usando nuestro archivo desde el principio hasta el final lo copiamos en numeros
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));

    //ahora ya podemos hacer cálculos, calculamos el máximo y mínimo de los elementos del vector
    cout<<"Maximoo: "<<*max_element(numeros.begin(), numeros.end())<<endl;
    cout<<"Mínimo elemento."<<min_element(numeros.begin(), numeros.end())<<endl;
    return 0;
}