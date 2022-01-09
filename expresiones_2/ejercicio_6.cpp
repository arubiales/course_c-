
#include <iostream>
using namespace std;

int main(){
    float a,b,c, resultado = 0;

    cout<<"Digite la primera nota: "; cin>>a;
    cout<<"Digite la segunda nota: "; cin>>b;
    cout<<"Digite la tercera nota: "; cin>>c;

    resultado = (a + b + c) / 3;

    cout.precision(2)
    cout<<"\nLa nota media es: "<<resultado<<endl;

    return 0;

}