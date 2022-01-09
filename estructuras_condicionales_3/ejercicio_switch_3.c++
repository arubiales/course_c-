#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout<<"Digite el dos números: "; cin>>num1>>num2;

    if(num1 == num2){
        cout<<"El número 1 es igual que el número 2"<<endl;
        }

    else if(num1>num2){
        cout<<"El número 1 es mayor que el 2"<<endl;
    }
    else{
        cout<<"El numero 2 es mayor que el 1"<<endl;
    }

    return 0;
}