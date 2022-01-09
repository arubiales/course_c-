#include <iostream>

using namespace std;

int main(){
    float exam1, exam2, exam3;
    int aprobadosTodos=0, aprobaron_1 = 0, ultimo_exam = 0;

    for(int i=1; i<=5;i+=1){
        cout<<i<<(". Introduzca la nota del primer examen: ");cin>>exam1;
        cout<<i<<(". Introduzca la nota del segunda examen: ");cin>>exam2;
        cout<<i<<(". Introduzca la nota del tercer examen: ");cin>>exam3;
        cout<<"\n";

        if((exam1>=5)&&(exam2>=5) && (exam3>=5)){
            aprobadosTodos += 1;
        }

        if((exam1>=5) || (exam2>=5) || (exam3>=5)){
            aprobaron_1 += 1;
        }

        if((exam1<5) && (exam2<5) && (exam3>=5)){
            ultimo_exam += 1;
        }
    }

    cout<<"aprobaron todos: "<<aprobadosTodos<<endl;
    cout<<"Aprobraon al menos un examen: "<<aprobaron_1<<endl;
    cout<<"Aprobaron unicamente el último examen: "<<ultimo_exam<<endl;

    return 0;

}