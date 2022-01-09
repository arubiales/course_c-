
class Perro{
    //Atributos
    private:
        std::string nombre, raza;

    //Métodos
    public:
    Perro(std::string _nombre, std::string _raza){
        nombre = _nombre;
        raza = _raza;
    }

    ~Perro(){

    }
    void mostrarDatos();
    void jugar();

};