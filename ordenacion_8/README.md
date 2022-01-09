# Ordenación

Es para ordenar elementos, hay multitud de métodos para ordenar datos (sort).  

Una colección de datos puede ser almacenada en memoria central o en archivos de datos externos (usb, DVD, etc.).
* Ordenación interna: cuando los datos se guardan en la memoria principal **Estos son los métodos que vamos a estudiar en este capítulo
* Ordenación externa: si los datos están almacenados en algún archivo (dvd, usb, etc.)

Los métodos que vamos a dar, normalmente ordena de forma ascendete sobre listas. Los métodos de ordenación se dividen en dos grandes grupos:
* Directos (básicos): son los más sencillos de aprender (método burguja, por selección, por inserción), pero son los más ineficientes para grandes cantidades de elementos
* Indirectos (avanzados): (shell, quick sort, merge sort, radix sort). Son más complicados de aprender, pero más eficientes

## Métodos de ordenación básicos
### Método burbuja
 Revisamos cada elemento de la lista que va a ser ordenado, con el siguiente, intercambiando posiciones si están en el orden equivocado. Es necesario revisar varias veces toda la lista, hasta que ya no es necesario más intercambios, lo que significa que la lista está ordenada.

### Método de ordenamiento por insercción
vamos viendo todos los elementos, todos los números que hay en su izquierda y sin son mayores, se van cambiando hasta que los números menores están los primeros y los mayores, están los últimos

### Ordenación por selección
Se basa en buscar el mínimo elemento de la lista y ponerlo en la posición 0, después se busca el siguiente mínimo y se pone en la posición uno, y así sucesivamente.

## Métodos de ordenación avanzados
### Método de ordenación shell
Se llama así por su inventor Donald Shell, es una mejora del método de inserción directa, por ello también es llamdo "ordenación por inserción con incrementos decrecientes". Realmente es muy parecido, ya que este en vez de comparar los elementos con los de la izquierda, lo que hace es dar saltos hacia la izquierda donde el salto es igual a n/2. Donde "n" es el número de elemntos, en cada iteración ser reduce el salto a la mitad, hasta que el salto es de tamaño uno. Para implementar este algoritmo hay que serguir los siguientes pasos

1. Dividir la lista original en n/2
2. Se clasifica cada grupo por separado, comparando las parejas de elemntos y si no están ordenados se intercambian
3. se divide ahora las listas a la mitad, es decir ahora es n/4, y así sucesivamente
4. El algoritmo termina, cuando el tamaño de salto es 1

### Ordenación rápida (QuickSort)
El algoritmo se va en la técnica "divide y vencerás". El método consiste en dividir un arreglo gigante en pequeñas partes y ordenarlas. Es el método es posiblemente **el más pequeño de código, más rápido de media, más elegante, y más interesante y eficiente de todos los algoritmos conocidos de ordenación**. Consiste en lo siguiente:

Divide los n elementos de la lista a ordenar en dos pàrtes por un elemento, una partición izquierda, un elemento central llamado "pivote" y una partición derecha. Los elementos de la izquierda tiene que ser menores que el pivote y los de la ordenación derecha, mayores al pivote. Los pasos que sigue son los siguiente:

1. Selecionamos el elemento central de un arreglo, como pivote
2. Dividir los elemento srestaantes en particiones d moto que ningun elemento de la izquierda tenga un númerto mayor que el pivote y que ningún elemento a la derecha tenga un número menor que el pivote
3. A continuación ordenamos la parte de la izqauierda utilizando QuickSort recursivamente
4. Y hacemos lo mismo con la parte de la derecha
5. La solución es la unión de todas las partes al final
