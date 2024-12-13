// Crea un programa que pida al usuario un número de mes (por ejemplo, el 4)
// y diga cuántos días tiene (por ejemplo, 30) y el nombre del mes. Debes usar un vector.
// Para simplificarlo vamos a suponer que febrero tiene 28 días.


#include <iostream>

using namespace std;

char salida;


int main() {
    int largo_meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string nombres_meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int n;
    cout << "Escribe el número de mes: ";
    cin >> n;

    cout << nombres_meses[n - 1] << ": " << largo_meses[n - 1] << " días";


    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}