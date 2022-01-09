#include <iostream>
using namespace std;

int main(){
    int numero, i;

    cout<<"ingrese un número: "; cin>>numero;
    
    i = 0;

    for(i; i<=10; i+=1){
        cout<<i*numero<<endl;
    }

    return 0;
}