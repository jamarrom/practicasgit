/*
Hacer un programa que cuente cuántos ceros hay en un grupo de N números enteros.
*/


#include <iostream>

using namespace std;

char salida;

int main() {
    int n;
    int ceros;
    cout << "¿Cuántos números? ";
    cin >> n;

    int arrayNumeros[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa un número: ";
        cin >> arrayNumeros[i];
        if (arrayNumeros[i] == 0) {
            ceros++;
        }
    }

    cout << "\nHay " << ceros << " cero(s) en tu grupo de números.";

    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}