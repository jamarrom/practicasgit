// Se quiere realizar un programa que lea por teclado las 5 notas obtenidas por un alumno
// (comprendidas entre 0 y 10). A continuación debe mostrar todas las notas, la nota media,
// la nota más alta que ha sacado y la menor.

#include <iostream>

using namespace std;

char salida;


void mostrarNotas (int notas[]) {
    // mostrar todas las notas
    cout << "Las notas del alumno son:";
    for (int i = 0; i < 5; i++) {
        cout << " " << notas[i];
    }
    cout << "\n";

    // mostrar el promedio
    cout << "La nota media es: ";
    int suma = 0;
    float media;
    for (int i = 0; i < 5; i++) {
        suma += notas[i];
    }
    media = suma / 5;
    cout << media << "\n";

    // mostrar la nota más alta
    int alta = notas[0];
    for (int i = 0; i < 5; i++) {
        if (notas[i] > alta) {
            alta = notas[i];
        }
    }
    cout << "La nota más alta es: " << alta << "\n";

    // mostrar la nota más baja
    int baja = notas[0];
    for (int i = 0; i < 5; i++) {
        if (notas[i] < baja) {
            baja = notas[i];
        }
    }
    cout << "La nota más baja es: " << baja << "\n";

}

int main() {
    int arrayNotas[5];
    int i = 0;
    int nota_temp;

    cout << "Introduce las notas del alumno.\n";

    while (i < 5) {
        cout << "Nota número " << i + 1 << ": ";
        cin >> arrayNotas[i];
        if (arrayNotas[i] < 0 || arrayNotas[i] > 10) {
            cout << "La calificación no puede ser menor de 0 ni mayor de 10. Inténtalo de nuevo.\n";
        }
        else {
            i++;
        }
    }

    cout << "\n";
    mostrarNotas(arrayNotas);


    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}