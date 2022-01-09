#include <iostream>
using namespace std;

int main(){
    char letra;

    cout<<"Digite un caracter: ";
    cin>>letra;
    
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"\nEs una minúscula"<<endl; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"\nEs una mayuscula"<<endl; break;
        default: cout<<"\nNo es una vocal"<<endl; break;
    }

    return 0;
}
