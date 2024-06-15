#include <iostream>
using namespace std;

float sumar(float a, float b) {

}

float restar(float a, float b) {

}

float multiplicar(float a, float b) {

}

float dividir(float a, float b) {

}

void iguales(float a, float b) {
  
}

void generar_array(int a, int b) {
  
}

int main(){
  int a;
  int b;
  int menu 

do{ 
  cout<<"Ingrese el primer numero: "<<endl;
cin>>a;
  cout<<"Ingrese el segundo numero: "<<endl;
cin>>b;
} while(a <= 0 || b <= 0);
switch(menu)
{
  case 1: 
    cout<<"1.- Sumar";
    sumar(a,b);
  break;

  case 2: 
   cout<<"2.- Restar";
   restar(a,b);
  break;

  case 3: 
   cout<<"3.- Multiplicar";
   multiplicar(a,b);
  break;

  case 4: 
   cout<<"4.- Dividir";
   dividir(a,b);
  break;

  case 5: 
   cout<<"5.- Saber si los numeros son iguales";
   iguales(a,b);
  break;

  case 6: 
   cout<<"6.-  Generar una array del tamaño del primer número y  rellenar el array con el segundo numero y lo imprima";
   generar_array(a,b);
  break;

  default: cout<< "Usted a ingresado una opcion incorrecta"; 
}
  return 0;
}
