# Funciones

1. Ponemos el tipo de la función, que es el tipo de dato que retorna la función (si es de tipo entera, traera un entero, si es flotante, un float y si **es void** significa que no retorna nada)
2. Dentro de la función se ponen parámetros que vamos a usar dentro de la función, se pone el tipo y la variable
3. Por último el conjunto de instrucciones


## Programas en C++.

Todos deben ser de la siguiente forma

```
// directivas del preprocesador (librerías y macros)

// prototipos de función

int main(){
    conjunto de instrucciones;
    return valor
}

//definiciones de función
```


# Plantillas de función

Nos sirve para hacer un tipo de dato general, así podemos poner cualquier tipo de dato, en el caso de que no sepamos que tipo de dato se quiere introducir, o vayamos a introducir números distintos.

```
template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero <0){
        numero = numero * -1
    }

    cout<<"El valor absoluto del numero es: "<<numero;
}

```

# Paso de parametros por referencia
Anteriormentee haciamos un paso de parámetros por valor, ahora vamos a ver como podemos hacer el paso por referencia, esto consiste en pasarle la dirección de memoria, donde se encuentra almacenado ese valor. Esto nos permite cambiar el valor de la variable directamente.  

Para ello solo tenemos que poner en los parámetros de la funcion, un ampersan.

(nota: no hace falta pasar el nombre de la variable cuando se declara la función al principio)


```
#include <iostream>

using namespace std;

void valNuevo(int&, int&)

int main(){
    int num1, num2;

    cout<<"Digite 2 numeros: "; cin>>num1, num2;
    
    valNuevo(num1, num2);

    cout<<"Los valores han cambiado a: "<<num1<<' '<<num2<<endl;


    return 0;
}

void valNuevo(int& xnum, int& ynum){ //el & significa la "dirección de" sirve para indicar direcciones en memoria
    cout<<"El valor de ambos números son: "<<xnum<<' '<<ynum

    xnum = 89;
    ynum = 85;
}
```

# Paso de parámetros de tipo vector

hay que poner el nombre del arreglo con los corchetes, y despuçes el tamaño de dicho vector que tiene que ser de **tipo constante**.

```
#include <iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
    const int TAM = 5; //fijamos el tamaño del vector, siempre ha de tener 5 elementos, no puede variar
    int vec5[TAM] = {1,2,3,4,5};

    cuadrado(vec5, TAM);
    muestra(vec5, TAM);

    return 0;
}

void cuadrado(int vec[], int tam){
    for(int i=0; i<tam; i+=1){
        vec[i] *= vec[i];
    }
}

void muestra(int vec[], int tam){
    for(int i=0; i<tam; i+=1){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}

```

# Pasar matriz como parámetro

En las matrices en C++ siempre necesitas poner el número de columnas;



```
#include <iostream>

using namespace std;

void mostrarMatriz(int m[][3], int,int); // C++ nos obliga a ponerle el número de columnas
void calcular_cuadrado(int m[][3], int, int);
void mostrar_matriz_elevada(int m[][3], int, int);

int main(){
    const int NFILAS = 2;
    const int NCOL = 3;
    int m[NFILAS][NCOL] = {{1,2,3}, {4,5,6}};

    mostrarMatriz(m, NFILAS, NCOL);
    calcular_cuadrado(m, NFILAS, NCOL);
    mostrarMatriz(m, NFILAS, NCOL);

    return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
    cout<<"Mostrando matriz origianl:\n";
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            cout<<m[i][j]<<" ";
        }
    cout<<"\n";
    }
}

void calcular_cuadrado(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; j+=1){
            m[i][j] *= m[i][j];
        }
    }
}

void mostrar_matriz_elevada(int m[][3], int nfilas, int ncol){
    cout<<"\n\nMostrando matriz elevada al cuadrado:\n";
    for(int i=0; i<nfilas; i+=1){
        for(int j=0; j<ncol; i+=1){
            cout<<m[i][j];
        }
        cout<<"\n";
    }
}
```

# Paso de parámetros tipo estructura

```
#include <iostream>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}p1; 

void pedir_datos();
void mostrar_datos(Persona);

int main(){
    pedir_datos();
    mostrar_datos(p1);

    return 0;
}


void pedir_datos(){
    cout<<"Digite su nombre: "; cin.getline(p1.nombre, 30, '\n');
    cout<<"Digite su edad: "; cin>>p1.edad;
}

void mostrar_datos(Persona p){
    cout<<p.nombre<<endl;
    cout<<p.edad<<endl;

}
```


# Recursividad de funciones

Funciones que se llaman a la propia función y se reusuelve todo al final. Comoo en Python

```
#include <iostream>

using namespace std;

int factorial(int);

int main(){
    int n = 4;

    cout<<factorial(n)<<endl;

    return 0;
}

int factorial(int n){
    if(n==0){
        n = 1;
    }
    else{
        n = n * factorial(n-1);
    }
    return n;
}
```