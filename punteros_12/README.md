# Punteros

Un puntero es una variable que almacena la dirección de memoria de otra variable. El puntero (la variable que guarda la dirección en la memoria), tiene que ser del mismo tipo que la variable (es decir int, float, char, lo que la variable sea)

Para definir un puntero usamos "*" delante de una variable que creamos especificamente para esta función.

```
#include <iostream>

using namespace std;

int main(){
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout<<"Numero: "<<*dir_num<<endl;
    cout<<"Dirección de mem: "<<dir_num<<endl;

    return 0;
}

```

# Punteros a arreglos
Para los arreglos, podemos capturar la dirección igualando el arreglo a un puntero (variable con asterisco)

```
#include <iostream>

using namespace std;


int main(){
    int numeros[] = {1,2,3,4,5};
    int *dir_numeros;

    //asi le pasamos la dirección en memoria de un vector
    dir_numeros = numeros;

    for(int i=0; i<5; i+=1){
        cout<<"Elemento del vector["<<i<<"]: " <<dir_numeros++<<endl; //de esta forma aumenta 4 bytes y pasa de una posición de memoria a la siguiente
    }
}
```

# Asignación dinámica de arreglos

Esto sirve para cuando haya un arreglo, dinámico, es decir, queramos cambiar, el número de datos en el arreglo de forma dinámica en vez de fijas un número estático.


* Usamos el **new** en una dirección de memoria
* Usamos la asignación de memoria (puntero), como si fuese una variable normal
* Por último liberamos el espacio del arreglo con delete

**NOTA:** Todo esto es posible con la librería **stdlib.h**

```
#include <iostream>
#include <stdlib.h> //CON ESTO TENEMOS NEW Y DELETE

using namespace std;

void pedir_notas();
void mostrar_notas();

int num_calif, *calif;

int main(){
    pedir_notas();
    mostrar_notas();


    delete[] calif; //liberar la memoria que hemos reservados

    return 0;
}

void pedir_notas(){
    cout<<"Digite el númeroo de calificaciones: "; cin>>num_calif;

    calif = new int[num_calif]; //creamos el arreglo con el número de datos que queremos almacenar

    for(int i=0; i<num_calif; i++){
        cout<<"Ingrese una nota: "; cin>>calif[i];
    } 
}


void mostrar_notas(){
    cout<<"\n \nMostrando notas del usuario:\n";
    for(int i=0; i<num_calif; i++){
        cout<<calif[i]<<endl;
    }
}
```

# Transmisión de direcciónes

Es igual que con las variables, pero con punteros.

```
#include <iostream>

using namespace std;

void intercambio(float *, float *); //Indicamos que usamos dos direcciones de memoria, donde hay 2 flotantes

int main(){
    float num1 = 20.8, num2=6.78;

    cout<<"Primer Número: "<<num1<<endl;
    cout<<"Segundo Número: "<<num2<<endl;

    intercambio(&num1, &num2);

    cout<<num1<<' '<<num2<<endl;


    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){
    float aux;
    
    //intercambiamos los valores
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;

}
```

# Transmisión de arreglos

Igual que punteos de arreglos así s e envian y se recurren:

```

#include <iostream>

using namespace std;

int hallarMax(int *, int);


int main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3,5,2,8,1};

    cout<<"El mayor elemento es: "<<hallarMax(numeros, nElementos);

    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max = 0;

    for(int i=0; i<nElementos; i++){
        if(*(dirVec+i)>max){
            max = *(dirVec+i);
        }
    }

    return max;

}
```

# Punteros y matrices

Hace falta crear punteros, de punteros ```**puntero_matriz```. Estos punteros lo primero son las filas y después van las columnas. El primer puntero son las filas que hay, y después cada fila es un vector, que esta formando la matriz


** puntero matriz -> *puntero fila -> [int] [int]
                     *puntero fila -> [int] [int]
                     *puntero fila -> [int] [int]


```
#include <iostream>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void mostrar_datos(int **);

int **puntero_matriz, nfilas, ncol; //esto es un puntero apuntando a otro puntero



int main(){

    pedir_datos();
    mostrar_datos(puntero_matriz);

    //LIBERAMOS LA MEMORIA DE LA MATRIZ
    for(int i=0; i<nfilas; i++){ //Liberamos las filas
        delete[] puntero_matriz[i];
    }

    delete[] puntero_matriz;


    return 0;
}

void pedir_datos(){
    cout<<"Introduzca el númerod de filas: "; cin>>nfilas;
    cout<<"Introduzca el número de columnas: "; cin>>ncol;

    puntero_matriz = new int*[nfilas]; //aquí le decimos que esto es un puntero
    for(int i=0;i<nfilas; i++){
        puntero_matriz[i] = new int[ncol]; //reservamos memoría para las columnas
    }

    cout<<"\nDigitando elementos de la matriz: ";
    
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<"Introduzca un número"; cin>>*(*(puntero_matriz +i)+j); 
        }
    }
}


void mostrar_datos(int **puntero_matriz){
    cout<<"Imprimiendo matriz"<<endl;

    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<endl;
    }
}


```

# Punteros a Estructuras


```

#include<iostream>

using namespace std;



struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona; //Creamos un puntero

void pedir_datos(); //Prototipo de Funcion
void mostrar_datos(Persona *);

int main(){
    pedir_datos();
    mostrar_datos(puntero_persona);

    return 0;
}

void pedir_datos(){
    cout<<"Digite su nombre: "; cin.getline(puntero_persona->nombre, 30, '\n'); //Guardamos datos dentros de una estructura usando un puntero.
    cout<<"Digite sue dad: "; cin>>puntero_persona->edad;
}

void mostrar_datos(Persona *puntero_persona){
    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;


}

```


