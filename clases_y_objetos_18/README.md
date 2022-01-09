# Creación de clases

Se necesitan crear tres archivos:

1. Un archivo "main.c++" donde se ejecutan las operaciones de la clase.
2. Un archivo "cabecera" con el nombre de la clase y extensión ".h". Por ejemplo "Punto.h" que simplemente indica el nombre de los distintos métodos, constructores, y si son públicos o privados.
3. Un archivo con el nombre de la clase, por ejemplo: "Punto.c++" donde se crean ya las funciones con su funcionalidad.
4. Por último compilamos los dos archivos c++ (excepto la cabecera)

## Objetos dinámicos y estáticos
Los dinámicos sus métodos se usan con "->", mientras que los estáticos, es como en Python.º


## Visibilidad de los miembros de la clase (encapsulamiento)

Hay tres tipos de formas en las cuales los miembros de la clase pueden ser vistos
1. privados: solo se puede acceder a los atributos mediante métodos de la misma clase
2. públicos: Cualquier archivo fuente, puede acceder a los miembros de esta clase y manipularlos (como es python)
3. protected: los protegidos pueden ser accedidos por miembros de la misma clase y por clases hijas!


## Sobrecarga de Funciones Miembro
Es el uso de varios métodos con el mismo nombre, a pesar de tener el mismo nombre C++ sabe diferenciarlos si tienen un número de parámetros distintos. Si son exactamente iguales, les sería imposible distinguirlos

## Destructor de objetos
Se utiliza con este simbolo "~". Es un método destructor es muy simple, sería así:

```
~Perro(){

}
```

Si son programas largos es conveniente que usemos los destructores, aunque para los objetos estáticos c++ lo haga automaticamente. Simplemente sirve para liberar la memoriaç


## This

c++ cuando se inicializa la clase, no sabe diferenciar entre los parametros y los atributos, por eso, le tenemos que poner la barra baja "_" para que sean variables distintas. Pero si al constructor le ponemos ```this->``` ya si lo sabe y sería como en Pythons

## Clases compuestas.

Es una clase, que entre sus atributos, tiene objetos de otras clases

## Miembros estáticos

Al igual que en Python, estos atributos pertenecen a la clase, es decir, todos los objetos tendran el mismo valor para ese atributo 


## Funciones amigas

Son funciones que pueden acceder a los miembros privados de una clase. Para ello se pone en la cabecera de la clase, la palabra reservada **friend** y el nombre de la función y parámetros. Y después en el main, se crea la función.

## Tipos abstractos en C++

