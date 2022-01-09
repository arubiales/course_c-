# Cadenas de caracteres

Tiene una librería estandar ```<string.h>```

para guardar caracteres la mejor función es ```cin.getline``` ¿Por qué?:
* La función ```cin``` deja de leer cuando encuentra un espacio, por lo que no podremos poner nombres completos
* La función ```gets``` no tiene en cuenta los caracteres asignados a la variable, por lo que se adueñará de memoría que no es suya
* La función ```getline``` **Es la mejor** ya que te permite poner espacios, y el espacio que ocupará en memoria, y cuando se parará de introducir datos
* La función ```strcpy``` copia una cadena de string de una variable a otra
* La funcion ```strcmp``` compara dos strings, además compara dos strings ordenados alfabeticamente
* La función ```strrev``` sirve para invertir una cadena (no disponible en linux)
* La función ```atoi``` convierte los strings a enteros (es para números ints)
* La función ```atof``` convierte los strings a floats (es para números floats)

```
int main(){
    //estas dos variables son exactamente iguales
    char palabra[] = "Alejandro";
    char palabra2[] = {'A', 'l','e','j','a','n','d','r','o'}
    char nombre[20]

    cout<<"Digite su nombre:";

    //primer parametro, la variable en la que almacenar, depués el número de espacios máximos en memoria, y por último la tecla a pulsar para dejar de introducir datos, en este caso el "intro"
    cin.getline(nombre, 20, '\n');

    cout<<nombre<<endl;

    return 0;
}


```