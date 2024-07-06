#include <iostream>
using namespace std;

void compras() {
    int opcion, idb;
    int n=2;
    int  id[n];
    string nombre[n];
    float  precio[n];
    string nombreP[n];

    do {
        cout<<"ELIGE UNA OPCION DEL SIGUIENTE MENU : " <<"\n";
        cout<<"1. REGISTRAR" <<"\n";
        cout<<"2. CONSULTAR POR ID" <<"\n";
        cout<<"3. LISTAR DATOS REGISTRADOS" <<"\n";
        cout<<"4. SALIR" <<"\n";
        cout<<"----> ";
        cin>>opcion;

    switch (opcion)
    {
     case 1:
        for (int i = 0; i < n; i++) {
            cout<<"Escribe el ID de la compra " <<i+1 <<": ";
            cin>>id[i];
            cout<<"Escribe el nombre de la compra " <<i+1 <<": ";
            cin>>nombre[i];
            cout<<"Escribe el precio de la compra " <<i+1 <<": ";
            cin>>precio[i];
            cout<<"Escribe el nombre del proveedor del producto " <<i+1 <<": ";
            cin>>nombreP[i];
        }
        break;
    case 2:
        cout<<"Escribe el ID de la compra : ";
        cin>>idb;
        for (int i = 0; i < n; i++)
        {
            if (idb==id[i])
            {
                cout<<"----- COMPRA ENCONTRADA ----- " <<endl;
                cout<<"ID                   : "<<id[i] <<endl;
                cout<<"NOMBRE               : "<<nombre[i] <<endl;
                cout<<"PRECIO               : $"<<precio[i] <<endl;
                cout<<"NOMBRE DEL PROVEEDOR : "<<nombreP[i] <<endl;
                break;
            }
            if (i==n-1 && idb!=id[i])
            {
                cout<<"ID NO ASOCIADO CON NINGUNA COMPRA";
    break;
             }
        
        
        }
    break;

    case 3:
        for (int i = 0; i < n; i++)
        {
            cout<<"DATOS DE LA COMPRA " <<i <<endl;
            cout<<"ID : "<<id[i] <<endl;
            cout<<"NOMBRE : "<<nombre[i] <<endl;
            cout<<"PRECIO : $"<<precio[i] <<endl;
            cout<<"NOMBRE DEL PROVEEDOR : "<<nombreP[i] <<endl;
        }
    
    case 4: break;
    }
    } while (opcion!=4 );
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
        case 1:
        compras();
            break;
        case 2:
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