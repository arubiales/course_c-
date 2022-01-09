#include <iostream>

using namespace std;

int main(){
    int x,y,aux;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nel nuevo valor de x es: "<<x<<endl;
    cout<<"El nuevo valor de y es: "<<y<<endl;

    
        
    return 0;
}
