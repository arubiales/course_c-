#include <iostream>

using namespace std;

int main(){
    int vector[100],n;

    cout<<"Digite el número de elementos que va a tener el arreglo: ";
    cin>>n;

    for(int i=0; i<n; i+=1){
        cout<<"Digite un número :";
        cin>>vector[i];

    }

    for (int i=0; i<n;i+=1){
        cout<<i<<" -> "<<vector[i]<<endl;
    }

    return 0;
}