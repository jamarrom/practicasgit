#include <iostream>
using namespace std;

void compras() {
  
}

void ventas() {

}


int main() {
    string usuario;
    string contrasenia; 
    int opcionPrincipal;
cout<<"Ingrese 0 para salir"<<endl;
 do {
 cout << "Ingrese usuario: ";
    cin >> usuario;
    cout << "Ingrese contrasenia: ";
    cin >> contrasenia;

if (usuario != "admin" && contrasenia != "12345")
cout<<"Los datos de acceso son incorrectos \n";
 }
  while  ((usuario != "admin" && contrasenia != "12345") && (usuario !="0"));
 
 do {
    cout<<"MENU \n 1.-Compras \n 2.- Ventas \n 3.- Cerrar sesion\n";
    cout << "Seleccione una opcion: ";
    cin >> opcionPrincipal;

    switch (opcionPrincipal) {
        case 1:compras;
        compras();
            break;
        case 2:ventas;
        ventas();
            break; 
        case 3:
        cout << "Cerrando sesion. Hasta luego.\n";
            break;
        default:
        cout << "Opcion invalida. Intente nuevamente.\n";
        }
 }
     while (opcionPrincipal != 3);
 
    return 0;
}