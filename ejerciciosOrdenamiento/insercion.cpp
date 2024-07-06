#include <iostream>
using namespace std;


void imprimirArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenarInsercion(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
        imprimirArray(arr,size);
    }
    
}

int main() {
    int arr[] = {54, 37, 81, 12, 95, 6, 23, 68, 47, 76, 29, 42};
    int size = 12;
    string cadena ="Hola";
  
    string cadenas[] = {"hola","mundo"} ;

    cout<<cadena[0]<<"-->";
    cout << "Lista original: ";
    imprimirArray(arr, size);
    ordenarInsercion(arr, size);

    cout << "Lista ordenada: ";
    imprimirArray(arr, size);

    return 0;
}
