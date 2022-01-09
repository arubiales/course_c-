#include <iostream>

using namespace std;

template <class T>
T maximo(T dato1,T dato2,T dato3);


int main(){
    int dato1 = 4.3, dato2 = 6.2, dato3=2.45;
    cout<<maximo(dato1,dato2, dato3)<<endl;


    return 0;
}

template <class T>
T maximo(T dato1,T dato2,T dato3){
    T max;

    if((dato1>= dato2) && (dato1>=dato3)){
        max = dato1;
    }
    else{ if((dato2>=dato1) && (dato2>=dato3)){
        max = dato2;
    }
        else{
            max = dato3;
            }
    }

    return max;
}