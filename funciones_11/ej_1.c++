#include <iostream>

using namespace std;

void mult(float num1, float num2);



int main(){
    float n1=3.45, n2=5.32;
    mult(n1, n2);

    return 0;
}


void mult(float num1, float num2){
    float multiplicacion = num1 * num2;

    cout<<"La multiplicación es: "<<multiplicacion<<endl;
}