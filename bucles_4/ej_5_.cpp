#include <iostream>
using namespace std;

int main(){
    int n, sumatorio=0;


    do{
        cout<<"Introduzca un valor: "; cin>>n;
        if(n > 0){
        sumatorio += n;
        }
    }while((n != 0) && ((n < 20) || (n>30)));


    cout<<sumatorio<<endl;
    return 0;
}