# Clases derivadas
Es muy parecida a Python una de las mayores diferenciaciones en las herencias es su forma de encapsulamiento (ya que en Python esto no existe).

**Por defecto si no pones nada, C++ entiende que estas haciendo una herencia privada.

## Tipos de Herencia

### Herencia Pública
Esto significa que una clase derivada, tiene acceso a los elementos pñúblicos y protegidos de su clase base. Los elementos públicos se heredan como públicos, los elementos protegidos se heredan como protegidos, y los privados **NO** se heredan.

### Herencia Privada
Hace que los miembros públicos y protegidos de la clase base se vuelvan privaos de la clase derivada, por lo que los miembros de la clase base (es decir las clases derivadas) no tienen acceso a ellos, de ninguna forma. Y los miembros privados son inaccesibles


### Herencia Protegida
Los miembros públicos y protegidos de la clase se convierten en protegidos, mientras que los miembros privados de la clase se vuelven inaccesibles.

**Siendo practicos, la herencia privada y protegida su principal diferencia es que, los métodos privados, solo se pueden heredar a una clase, si después de está clase se intentan heredar a más hijos, es imposible (a sus nietos). Mientras que la Hereencia Protegida tu puedes heredar a nietos, bisnietos, tataranietos, etc.**

### Guardian de inclusión múltiple
Sirve para cuando una clase tiene muchhos hijos, para que C++ no se confunda y compile solo, una vez la clase padre.

## Herencia multiple
Cuando una clase hija, tiene varios padres

**Problemas de la herencia multiple**

* Ambiguedad por el uso de nombres identicos en diferentes clases base. Esto se puede resolver con el operador :: (conocido como operador de ambito)
* Herencia repetida: Cuando una clase hereda indirectamente dos copias de la misma clase base. También ser resuelve con el operador de ambito ::

## Clases Abstractas

* Se utilizan como solo como Clase padre
* No se pueden instanciar objetos (Pero sí crearlos!!!! Para crear arreglos por ejemplo)
* Sirve para proporcionar una clase base apropiada a partir de la cual heredan otras clases


Para esto se usan los **métodos virtuales,** que son métodos que sabemos que existen y son necesarios, pero no necesitamos implementarlo. Y cuando una clase tiene un método virtual, es una **clase abstracta**


```
virtual void alimentarse() = 0;
```

## Polimorfismo

El polimorfismo permite que diferenets objetos responda de un modo diferente al mismo mensaje. Para usar el polimorfismo se necesita seguir las siguientes reglas:

1. Crear una jerarquia de clases con las operaciones importantes definidaas por las funciones miembro declaradas como virtuales en la clase base.
2. Las implementaciones específicas de las funciones virutalse se deben hacer en las clases dervivadas. Cada clase derivada puede tener su propia versión de las funciones.

Ejemplo practico:

Tenemos una clase padre abstracta llamada polígono. Esta clase tiene dos hijos, Rectangulo y Triangulo que calculan el area y el perimetro (como sabemos son distintas formulas, para calcular la de un triangulo que un rectangulo). **El polimorfismo consiste** En que yo puedo crear un array de Poligonos y meter tanto objetos triangulo como rectangulo en el mismo array, a pesar de ser clases distintas, gracias a que ambas pertenecen a polígono. Esto permite también que los métodos area y perímetro se comporten de forma distinta haciendo un bucle for. **Permitiendo así que los objetso respondan de un modo diferente al mismo mensaje**