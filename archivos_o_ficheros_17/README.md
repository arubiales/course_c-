# Archivos
para crear archivos, se utiliza el tipo de dato **ofstream** perteneciente a la librería **fstream**. Si queremos ver un archivo utilizamos **ifstream**.

Al crear un objeto archivo, tienes varios métodos, como open, close, etc.

```
#include<iostream>
#include<stdlib.h>
#include<fstream> //para escribir texto

using namespace std;

void escribir();

int main(){

    escribir();

    return 0;
}

void escribir(){
    ofstream archivo; //este es el tipo de dato, y lo otro el nombre de la variable

    archivo.open("prueba.txt", ios::out);  //abrimos el archivo pero como no existe, lo va a crear, si existiese lo remplazaría. Aquí también se puede poner una ruta

    if(archivo.fail()){//esto envia un true o un false, si esto tiene un true, es que no se ha podido crear el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    archivo<<"Hola qué tal? mi nombre es Alberto"; //escribimos en el archivo

    archivo.close(); //cerramos
 ```

 # Modos de archivo

 * Escritura: ```ios::out```
 * Lectura: ```ios::in```
 * Escritura, sin borrar lo anterior: ```ios::app```


# Archivo Binario
Los archivos binarios funcionan distinto de los archivos de texto, por lo que hay que hacer algunos cambios.

* No se puede usar el getline()
* A la función open hay que hacerla así ```archivoB.open("prueba.dat", ios::out | ios::binary);
* al guardar hay que mandar el tamaño de la variable.


# Funciones de posicionamiento del cursero y escritura

Depende de si es escritura o lectura. Nos dice donde se encuentra el puntero:

**Para escritura:**  
Solo funcionan con ofstream

* archivo.tellp(): este método te dice donde está el cursos
* archivo.seekp(n): te posiciona el cursor en n y a partir de hay escribe sobreescribiendo

**Para lectura:**  
Solo funcionan con ifstream

* archivo.seekg(n): lee desde la posición indicada en adelante
* archivo.tellg(): posición actual desde la que se está leyendo