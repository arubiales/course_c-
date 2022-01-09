#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Digite un número entero: "; cin>>num;


    if (num % 2 == 0){
        cout<<"El número es par"<<endl;
    } 
    else{
        cout<<"El número es impar"<<endl;
    }

    return 0;

}