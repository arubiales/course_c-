# Genericidad

Es una propiedad que permite definir una clase (o función), sin especcificar el tipo de datos de no o más de sus miembros (parñámetros). De esta forma se puede cambiar la clase para adaptarla a los diferentes usos sin tener que reescribirla. Es decir da flexiblidad.

Utilizamos la palabra reservada ```template<typename dato1, typename dato2>```

**Un dato solo es un número de dato**  es decir, dato1, puede ser cualquier cosa, pero una vez es definido como algo, ya es ese tipo de dato siempre. No podemos crear una función que nos diga el número de mayor de un entero y un flotante usando en ambas dato1, tendriamos que usar dato1 para los enteros por ejemplo y dato2 para los flotantes.


## Plantillas de clase

Permiten definir vesiones de una misma clase que difieren en el tipo de dato. Es decir, se crea el modelo de una clase el cual permitirá definir disintas instancias de la misma para diferentes tipos de dato