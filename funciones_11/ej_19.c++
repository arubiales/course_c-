#include <iostream>

using namespace std;

int suma_enteros(int);

int main(){
    int n = 3;

    cout<<suma_enteros(n)<<endl;

    return 0;
}

int suma_enteros(int n){
    if(n==0){
        n = 0;
    }
    else{
        n = n + suma_enteros(n-1);
    }

    return n;
}