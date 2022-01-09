#include <iostream>

using namespace std;

int main(){
    float a,b,c,d,e,f, resultado = 0;

    cout<<"Digite un número para a: ";cin>>a;
    cout<<"Digite un número para b: ";cin>>b;
    cout<<"Digite un número para c: ";cin>>c;
    cout<<"Digite un número para d: ";cin>>d;
    cout<<"Digite un número para e: ";cin>>e;
    cout<<"Digite un número para f: ";cin>>f;

    resultado = (a + (b/c)) / (d + (e/f));
    cout.precision(2);
    cout<<"El resultado es: "<<resultado<<endl;
    return 0;
}

