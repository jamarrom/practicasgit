#include <iostream>
using namespace std;

//    int arr[] = {54, 37, 81, 12, 95, 6, 23, 68, 47, 76, 29, 42};
//i<11  j<11   
//j<10

void imprimirArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenamientoBurbuja(int arr[], int size) {
     for (int i = 0; i < size - 1; i++) {
          for (int j = 0; j < size - i - 1; j++) {
               if (arr[j] > arr[j + 1]) {
                  // Intercambiar los elementos
                  int temp = arr[j];
                  arr[j] = arr[j + 1];
                   arr[j + 1] = temp;
               }
           }
           imprimirArray(arr, size);
         }
}


int main() {
    int arr[] = {54, 37, 81, 12, 95, 6, 23, 68, 47, 76, 29, 42};
    int size = 12;
    cout << "Lista original: ";
    imprimirArray(arr, size);
    ordenamientoBurbuja(arr, size);

    cout << "Lista ordenada: ";
    imprimirArray(arr, size);

    return 0;
}
