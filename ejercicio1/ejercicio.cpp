#include <iostream>
using namespace std;

float sumar(float a, float b) {
  float sumas;
    sumas = a + b;
    cout<<"El resultado de la suma es " <<sumas;
}

float restar(float a, float b) {
    float restas;
    restas = a - b;
    cout<<"El resultado de la resta es " <<restas;
}

float multiplicar(float a, float b) {
    float multiplicas;
    multiplicas = a * b;
    cout<<"El resultado de la multiplicación es " <<multiplicas;
}

float dividir(float a, float b) {
    float divides;
    divides = a / b;
    cout<<"El resultado de la division es " <<divides;
}

void iguales(float a, float b) {
  if (a==b)
  {
    cout<<"Los numeros son iguales";
  } else
    cout<<"Los numeros no son iguales";
  
}

void generar_array(int a, int b) {
  float arrays [a];
    for (int i = 0; i < a; i++)
    {
        arrays[i] = b;
    }
    cout<<"[";
    for (int i = 0; i < a; i++)
    {
        cout<<" " <<arrays[i];
    }
    cout<<" ]";
}

int main(){

  return 0;
}
