# STL
Es una biblioteca estandar de plantillas con la cual puedes hacer las anteriores acciones de forma más fácil. Por ejemplo crear listas, nodos, etc de tipo template.

Esta biblioteca presenta 3 componentes básicos:
1. Los contenedores: objetos capaces de almacenar otros objetos
2. Los iteradores: objetos a traves de los cuales se puede acceder a los elementos del contenedor. (es similar a un puntero)
3. Los algoritmos: hay más de 70 algoritmos  para aplicar en los contenedores, para la búsqueda, el ordenamiento, la transformación, etc.
   
## Contenedores
Son una colección de estructuras de datos más usados, es donde se contiene o agrupan objetos de un mismo tipo. **Hay varios tipo de contenedores**, la diferencia entre unos y otros reside en la forma en que los objetos son alojados, en como se crea la secuencia de elementos y la manera en que los podrá acceder cada uno de ellos. Principalmente hay dos tipo de contenedores

1. Contenedores lineales: donde tenemos:
   * listas: Son los contenedores adecuandos cuando se requieren operaciones de inserción, o eliminación en cualquier parte. Están almacenadas como listas doblemente enlazadas, esto es q  ue cada elemento (nodo) contiene las direcciones del nodo siguiente y el anterior. **Las ventajas de las listas es la inserción o eliminación de un elemnto y la desventaja es que ya no se tiene un acceso aleatorio a los elementos, sino un acceso secuecial de forma bidireccional. **Para recorrer las listas son necesarios iteradores
   * vector: Representa al arreglo clásico de elemento en donde todos los elemetnos contenido están contiguos en memoria, esto permite mayor velocidad de acceso a los elementos.
   * Deque (una cola o doble cola): es igual que un vector, con la diferencia de que podemos agregar por delante y por detras
2. Contenedores asociativos:
   * map: es un diccionario clave valor, ordenador y único
   * set: objetos ordenados y únicos
   * multimap: igual que el map, pero ya no son únicos
   * multiset: igual que el set, pero ya no son único

## Iteraadores
Entender el concepto de iterador es clave para entender esta biblioteca. En definitiva es un objetoq ue abstrae el proceso de moverse a traves de una secuencia. Hay varios tipos
* Forward iterators: iteradores que pueden avanzar el elemento siguietne
* Bidirectional iterators: pueden avanzar al elemento siguiente o retroceder al anterior
* Random acces iterators: pueden avanzar o retroceder más de una posición de una vez y moverte como quieras-

### Metodos comunes a todos los contenedores
::size(): devuelve la cantidad de elemetnos que tiene el contenedor
::max_size(): devuelve el tamaño máximo que puede alcanzar el contenedor antesd e requerir más memoria
::empty(): retorna true, si no tiene elementos
::swap(T &a): intercambia el contenido del contenedor con el que se recibe como parámetro
::clear(): elimina todos elementos del contenedor

**Se pueden usar los operadores comparativos entre contenedores**

**Para ver más métodos ir a los archivos .c++

## Algoritmos STL
Estas funciones son plantillas que operan sobre los contenedores

## Contenedores asociativos

Su estructura en memoria, no es lineal, si no que se implementan como árboles binarios de búsqueda balanceados. Para lo que tiene que ver con busqueda, eliminación o cambio de un elemento, son mucho más eficiente que los contenedores lineales, por contra la STL te da muchas menos funciones para trabajar con los contenedores asociativos, que con los lineales.

Algunos métodos de estos contenedores son:
* ```A::insert(clave &x)```: inserta un elemento
* ```A::insert(A::iterator i, A::iterator f)```:inserta una cantidad de elementos.
* ```A::erase(clave &x)```: Borra todos los elemento que tengan esa clave
* ```A::erase(A::iterator p)```: Borra el elemento apuntado por p.
* ```A::count(clave &x)```: Devuelve la cantidad de elementos que tiene la clave x.
* ```A::find(clave &x)```: Devuelve un iterador apuntado al primer elemento que coincida con x
* ```A::lower_bound(clave &x)```: Devuelve un iterador al primer elmento que tenga la clave x.
* ```A::upper_bound(clave &x)```: Devuelve un iterador al elemento siguiente al ultimo elemento con clave x.