# Árboles

## Características
* Son estructuras de datos dinámicas y no lineales, que nos permiten recorrer el árbol de un lado al otro.  
* Un árbol consta de un conjunto finito de elementos, llamados nodos y un conjunto finito de lineas dirigidas denominadas ramas.
* El nodo principal es llamado **Raiz** y el resto son nodos hijos, los **nodos hijos** tienen otro hijos, y cuando ya no hay nada más a los último hijos se le denominan **hojas**
* Longitud de camino: es el número de rama que tienes que pasar para llegar de un nodo hacia otro
* Altura de un nodo: desde las hojas contamos los nodos hasta el nodo que buscamos
* Profundidad de un nodo: igual que la altura, pero desde la raiz en vez de las hojas
* Nodos hermanos: son nodos que están al mismo nivel y que tienen el mismo padre
* Orden: máxima cantidad de hijos que puede tener cada nodo.

## Para definir un nodo
* Necesitamos un nodo que apunte a otros nodos

## Arboles Binarios
Es un árbol de orden 2. Se conoce al nodo de la izquierda como hijo izquierda y el nodo de la derecha como hijo derecho.  

* Un arbol binario es una estructura recursiva. Se divide en tres subconjuntos disjuntos:
  * Nodo Raiz
  * Subarbol izquierdo
  * subarbol derecho


### Tipos de arboles binarios:
* Árbol lleno: todos sus nodos tienen dos hijos (excepto las hojas, claro) y todos llegan hasta el último nivel.
* Árbol completo: No tiene todos sus nodos hojas al mismo nivel.
* Árbol degenerado: cuando un árbol solo tiene hijos por un lado. (En realidad es como una lista enlazada)

## Árbol binario de búsqueda.
Es aquel árbol que dad un nodo, todos los datos del asubarbol izquierdo son menores y todos los datiois del subárbol izquierdo son mayores. Y esa misma ley aplica tanto a la parte derecha como a la izquierda.

**Las operaciones que se hacen en los árboles son:** insertar un nodo, mostrar el árbol, buscar un nodo especifico, recorrer el árbol y borrar un nodo


### Insertar un nodo en el árbol
Tenemos que crear un Nodo, pero en este caso nuestra estructura tiene 3 campos: dato,  puntero derecho y puntero izquierdo

## Recorrido de árboles

Hay varias formas de reccorrer un árbol. El recorrido en anchura, y en profundidad, el recorrido en profundidas tiene 3 clases:

1. Preorden: Primero recorremos la raiz, y después el lado izquierdo, y después el derecho.
2. InOrden: Priumero se recorre el lado izquierdo, después se muestra la raiz y por último el lado derecho.
3. PostOrden: Primero se recorre el lado izquierdo, después el árbol derecho y por último la raíz

## Elminar Nodos:

* Si tiene dos nodos: se va al derecho y después al izquierdo todo lo que se pueda y se reemplaza por el número eliminado.