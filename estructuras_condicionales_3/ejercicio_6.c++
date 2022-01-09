#include <iostream>

using namespace std;

int main(){
    float a;

    cout<<"Digite un número: "; cin>>a;

    if (a == 0){
        cout<<"El número es igual a: "<<a<<endl;
    }
    else if (a > 0){
        cout<<"El número es positivo"<<endl;
    }
    else{
        cout<<"El número es negativo"<<endl;
    }

    return 0;
}