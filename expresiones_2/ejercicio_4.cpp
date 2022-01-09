#include <iostream>

using namespace std;

int main(){
    float a,b,c,d, resultado = 0;

    cout<<"Digite el número a: "; cin>>a;
    cout<<"Digite el número b: "; cin>>b;
    cout<<"Digite el número c: "; cin>>c;
    cout<<"Digite el número d: "; cin>>d;


    resultado = a + (b/(c-d));

    cout.precision(2);
    cout<<"\nEl resultado es: "<<resultado<<endl;
    
    return 0;
}