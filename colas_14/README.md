# Colas
Es una estructura fifo. Al contrario que las pilas, aquí el primero en entrar es el primero en salir (como es el funcionamiento de una cola en la relidad). Funcionan de forma similar a las pilas, es decir son nodos que se apuntan unos a otros y hay que introducir y sacar nodos.

## Insertar
Para insertar elementos en una colas hay que seguir 3 pasos:

1. Crear espacio en memoria para almacenar un nodo.
2. Asignar ese nuevo nodo al dato que queremos insertar.
3. Asdignar los punteros frente y fin hacia el nuevo nodo.

## Eliminar

Para eliminar elementos de una cola, hay que seguir tres pasos:

1.  Obtener el valor del nodo.
2.  Crear un nodo auxiliar y asignarle el frende de la cola.
3.  Eliminar el nodo del frente de la cola