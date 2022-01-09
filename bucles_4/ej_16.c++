#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Introduzca un número: "; cin>>n;

    for(int i=2; n>1; i+=1){
        while(n%i==0){
            cout<<i<<" ";
            n /=i;
        }
    }
    cout<<endl;
    
    return 0;
}