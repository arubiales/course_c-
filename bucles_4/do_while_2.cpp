#include<iostream>
using namespace std;

//la lógica es hacer lo mismo de forma distinta, el while, primero piensa si se cumple una condición y luego actua, mientras que el do while
//primero actua y luego piensa si se cumple la condición

int main(){
    int i;

    i = 1;
    do{
        cout<<i<<endl;
        i += 1;
    }while(i<=10);

    return 0;
}