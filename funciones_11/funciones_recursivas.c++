#include <iostream>

using namespace std;

int factorial(int);

int main(){
    int n = 4;

    cout<<factorial(n)<<endl;

    return 0;
}

int factorial(int n){
    if(n==0){
        n = 1;
    }
    else{
        n = n * factorial(n-1);
    }
    return n;
}

