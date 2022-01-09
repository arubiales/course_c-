//Se resulve con un algoritmo recursivo de tipo divide y venceras

#include <iostream>

using namespace std;


void hanoi(char var_init, char var_central, char var_final, int n){
    if(n==1){//CASO base
        cout<<"Mover disco "<<n<<" desde varilla "<<var_init<<" a varilla "<<var_final<<endl;
    }
    else{ //Caso recursivo
        hanoi(var_init, var_final, var_central, n-1);
        cout<<"Mover disco "<<n<<" desde varilla "<<var_init<<" a varilla "<<var_final<<endl;
        hanoi(var_central, var_init, var_final, n-1);
    }

}



int main(){
    
    hanoi('A', 'B', 'C', 8);


    return 0;
}
