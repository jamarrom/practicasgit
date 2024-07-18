#include <string>
#include <iostream>
using namespace std;

void compras() {
  
}

void ventas() {
    int salir = 0;
    int opcion = 0;
    int id_productos[5] = {}; // podría intentar con matrices
    string nombres_productos[5] = {};
    int precios_productos[5] = {};
    string clientes[5] = {};
    int temp_id;
    int repetir_operacion = 0;

    do {
        cout << "--------- VENTAS\n";
        cout << "(1) Registrar\n(2) Consultar por ID\n(3) Listar datos registrados\n(4) Salir\n";
        cout << "Seleccione una opción tecleando su respectivo número: ";
        cin >> opcion;
    

        switch (opcion)
        {
        case 1:
            cout << "--------- VENTAS: Registrar\n";
            for (int i = 0; i < 5; i++) {
                int id_dupe = 0;
                cout << "Ingrese los datos de la venta no. " << i+1 << ".\n";
                do
                {
                    cout << "ID del producto: ";
                    cin >> id_productos[i];
                    if (i > 0) {
                        if (id_productos[i] == id_productos[i-1] || id_productos[i] == id_productos[i-2] || id_productos[i] == id_productos[i-3] || id_productos[i] == id_productos[i-4])
                        {
                            id_dupe = 1;
                            cout << "Ya existe un producto con ese número de ID. Introduzca un ID diferente.\n";
                        } else {
                            id_dupe = 0;                            
                        }
                        
                    }
                } while (id_dupe == 1);
                cout << "Nombre del producto: ";
                getline(cin >> ws, nombres_productos[i]);
                cout << "Precio del producto: ";
                cin >> precios_productos[i];
                cout << "Nombre del cliente: ";
                getline(cin >> ws, clientes[i]);
                cout << "\n";
            }
            cout << "Registro finalizado.\n";
            break;

        case 2:
            cout << "--------- VENTAS: Consultar por ID\n";
            if (id_productos[0] == false) {
                cout << "Aún no se ha registrado ninguna venta.\n";
            } else {
                repetir_operacion = 0;
                do {
                    cout << "Ingrese el número de ID de algún producto: ";
                    cin >> temp_id;

                    int match;

                    for (int i = 0; i < 5; i++) {
                        if (temp_id == id_productos[i]) {
                            match = 1;
                            cout << "ID: " << id_productos[i] << "\n";
                            cout << "Nombre del producto: " << nombres_productos[i] << "\n";
                            cout << "Precio del producto: " << precios_productos[i] << "\n";
                            cout << "Nombre del cliente: " << clientes[i] << "\n";
                        }
                    }
                    
                    if(match == 0) {
                        cout << "No se encontró ningún producto con el número de ID proporcionado.\n";
                    }

                    do {
                        cout << "¿Desea consultar otro producto?\n(1) Sí\n(2) No\n";
                        cin >> repetir_operacion;
                        if(repetir_operacion != 0 && repetir_operacion != 1) {
                            cout << "Opción inválida. Inténtelo de nuevo.\n";
                        }
                    } while(repetir_operacion != 0 && repetir_operacion != 1);
                    
                } while(repetir_operacion = 1);
            }
            break;

        case 3:
            cout << "--------- VENTAS: Listar datos registrados\n";
            
            if (id_productos[0] == false) {
                cout << "Aún no se ha registrado ninguna venta.\n";
            } else {
                for (int i = 0; i < 5; i++) {
                    cout << "Venta no. " << i+1 << "\n";
                    cout << "ID del producto: " << id_productos[i] << "\n";
                    cout << "Nombre del producto: " << nombres_productos[i] << "\n";
                    cout << "Precio del producto: " << precios_productos[i] << "\n";
                    cout << "Nombre del cliente: " << clientes[i] << "\n";
                }
            }

            break;

        case 4:
            salir = 1;
            cout << "Saliendo...";
            break;
        
        default:
            cout << "Opción no válida. Inténtelo de nuevo.";
            break;
        }
    } while (salir == 0);

    /* cout << "Introduzca el número de ID: ";
    cout << ""; */
}


int main() {

    return 0;
}