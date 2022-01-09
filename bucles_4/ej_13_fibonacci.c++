#include <iostream>

using namespace std;

int main(){
    int n, x=0, y=1, z=1;

    cout<<"Introduzca un número: "<<endl; cin>> n;
    cout<<"1 ";
    for(int i=1; i<n; i+=1){
        z = x+y;
        cout<<z<<" ";
        x = y;
        y = z;
    }
    cout<<"\n";
    return 0;
}