//Declaracion de una clase

//Creamos la clase
class Punto{
    //atributos de la clase (se ponen encapsultados)
    private: //ESTO ES un modificador de acceso: Aquí solamente los métodos de esta misma clase pueden acceder a x e y
        int x,y;

    //Metodos
    public: //Esto es otro modificador de acceso: aquí todos los métodoss pueden acceder
        Punto(int _x, int _y){ //esto es como el __init__ en python, aquí tienen el mismo nombre que la clase sirve para inicializar. se llama CONSTRUCTOR. Puede haber varios constructores
            x = _x;
            y = _y;
        }

        Punto(){ //constructor 2
            x = y = 0;
        }

        void setX(int valorX); //El "s"et" significa establecer, el valor de x (es el setter). Nos permite establecer los valores de x e y
        void setY(int valorY);
        
        int getX(); //getter, para obtener el valor de x
        int getY(); 
};