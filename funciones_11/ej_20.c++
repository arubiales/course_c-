#include <iostream>

using namespace std;

int fibonacci(int);

int main(){
    int n=10;

    for(int i=0; i<n; i+=1){
        cout<<fibonacci(i)<<" , ";
    }

    return 0;
}

int fibonacci(int n){
    if(n < 2){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}