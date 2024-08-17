#include <iostream>
using namespace std;

class Persona {
  // Atributos
  public:
    string nombre;
    int edad;
  // Métodos
  //public:
    void saludar() {
      cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main () {
  Persona persona1;
  persona1.nombre = "Juan Pérez";
  persona1.edad = 30;
  persona1.saludar();
}