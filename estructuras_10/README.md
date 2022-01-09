# Estructuras

Es una colección de uno a más tipos de elemntos denominados campos, cada uno de lso cuales puede ser un tipo de dato diferente. vamos a ver ejemplo:

```
struct coleccion_CD{
    char titulo[30];
    char artista[25];
    int numCanciones;
    float precio;
    char fecha_compra[20];
}CD1, CD2, CD3;             //Declaramos las variables en la popia estructura


```

* Podemos ver que usamos la palabra reservada "struct"
* Declaramos las variables al final del struct
* tiene que estar las variables en comillas dobles para introducir datos


# Estructuras anidadas
Es una estructura dentro de otra estructura, por ejemplo.

```
struct info_direccion{
    char direcion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

```
