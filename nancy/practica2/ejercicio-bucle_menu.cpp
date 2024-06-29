// 7.- Realiza un programa que muestre un menú en pantalla con las opciones:
// 1) Sumar
// 2) Restar
// 3) Multiplicar
// 4) Dividir
// 5) Salir
// El usuario debe seleccionar una opción y, a continuación, el programa deber solicitar el ingreso de 2 números enteros.
// Una vez ingresados los números, se deberá evaluar con un switch, realizando la operación correspondiente a la opción seleccionada.
// La ejecución debe realizarse una y otra vez, hasta que el usuario seleccione la opción # 5.

#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    int a;
    int b;

    do {
        cout << "1) Sumar\n2) Restar\n3) Multiplicar\n4) Dividir\n5) Salir\n" << "Selecciona una opción tecleando su respectivo número: ";
        cin >> opcion;
        cout << "\n";

        if (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4) {
            cout << "Ingresa dos números enteros.\n";
            cout << "Primer número: ";
            cin >> a;
            cout << "Segundo número: ";
            cin >> b;
        }

        switch (opcion)
        {
        case 1: // sumar
            cout << "Resultado de la suma: " << (a + b) << "\n\n";
            break;

        case 2: // restar
            cout << "Resultado de la resta: " << (a - b) << "\n\n";
            break;

        case 3: // multiplicar
            cout << "Resultado de la multiplicación: " << (a * b) << "\n\n";
            break;

        case 4: // dividir
            cout << "Resultado de la división: " << (a / b) << "\n\n";
            break;

        case 5: // salir
            cout << "Saliendo...";
            break;
        
        default:
            cout << "No seleccionaste una opción válida. Inténtalo de nuevo.\n\n";
            break;
        }
    } while (opcion != 5);

    return 0;
}