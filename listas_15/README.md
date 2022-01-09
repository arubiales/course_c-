# Listas
Una lista enlazada consta de un número de nodos con dos componentes(campos), un enlace al siguiente nodo de la lista y un valor, que puede ser de cualquier tipo. Es una estructura de datos dinámica. Se dice que es dinámica porque puede haber distintos tipos de datos, y además no tiene porque darse un espacio en memoria al iniciarse, si no que se van incluyendo dinamicamente, conforme se añaden nodos a la lista. (al contrario todo esto que los arrays)

## Las listas se pueden dividir en 4 categorías:

1. Listas simplemente enlazadas: cada nodo (o elemento) contiene un único enlace que conecta ese nodo al siguiente. Esta lista es eficiente en recorridos directos (hacia adelante).
2. Listas Doblemente Enlazadas: Cada nodo contiene dos enalces, uno al siguiente y otro al pedecesor. Esta lista es eficiente en recorrido directo hacia adelante y hacia atrás
3. Lista Circuular Simplemente Enlazada: Es una lista simplemente enlazad, lo único es que el último elemento, está enlazado con el primero.
4. LIsta Circular Doblemente Enlazada: igual que la doblermente enlzada pero en la que él último elemento se enlaza al primero y viceversa.




## Operaciones en listas enlazadas:

1. Insertar elementos en una lista enlazada
2. Mostrar los elementos de una lista enlazada
3. Buscar un elemento en una lista enlzada.
4. Eliminar un elemento en una lista enlazada

### Insertar elementos en una lista

Hay que seguir estos 4 pasos:
1. Crear un nuevo_nodo, una nueva posición en memoria
2. asignar a nuevo_nodo -> dato el elemento que queremos incluir en la lista
3. crear dos nodos auxiliares y asignar lista al primero de ellos
4. insertar el elemneto a la lista

### Mostrar elementos en una lista

1. Crear un nuevo nodo(actual)
2. Igualar ese nuevo nodo (actual) a lista
3. Recorrer la lista de inicio a fin

### Buscar un elemento en una lista.

1. Creamos un nuevo nodo (actual).
2. igualar ese nuevo nodo a la lista.
3. Recorrer la lista
4. Determinar si el elemento existe o no en la lista

### Eliminar un nodo de la lista

1. Preguntar si la lista no está vacía.
2. Crear un *aux_borrar y *anterior=NULL
3. Igualar *aux_borrar al inicio de la lista
4. Recorrer la lista.
5. Eliminar el elemento

### Eliminar todos los nodos (elementos) de la lista.

1. Creamos un nodo auxiliar para igualarlos al inicio de la lista
2. Guardar el dato que queremos eliminar dentro de *aux
3. Pasamos la lista a siguiente nodo.
4. Eliminar aux.