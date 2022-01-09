#include <iostream>

using namespace std;

//prototipo de función. Aquí le digo a C++ que está función va a estar en el archivo
int encontrarMax(int x, int y);



int main(){
    int n1, n2, mayor;
    
    cout<<"Digite 2 números: "; cin>>n1>>n2;

    mayor = encontrarMax(n1, n2);

    cout<<mayor<<endl;

    return 0;
}


//Definición de función
int encontrarMax(int x, int y){
    int numMax;

    if(x>y){
        numMax = x;
    }
    else{
        numMax = y;
    }


    return numMax;
}