#include <iostream>
using namespace std;

int main(){
    int n, resultado = 0;

    cout<<"Digite un número: "; cin>>n;

    for(int i=0; i<n+1; i+=1){
        resultado+=i;
    }

    cout<<resultado<<endl;

    return 0;
}