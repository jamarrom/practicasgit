#include <iostream>
using namespace std;

int main() {
    const double tarifa_oficina = 10.0; 
    const double tarifa_extra = 15.0;   

    int horas_oficina;
    int horas_extra;


    cout << "Ingrese el número de horas trabajadas en horario de oficina: ";
    cin >> horas_oficina;
    cout << "Ingrese el número de horas trabajadas en horario extra: ";
    cin >> horas_extra;

    double pago_oficina = horas_oficina * tarifa_oficina;
    double pago_extra = horas_extra * tarifa_extra;
    double pago_total = pago_oficina + pago_extra;

    cout << "Pago por horas de oficina: $" << pago_oficina << endl;
    cout << "Pago por horas extras: $" << pago_extra << endl;
    cout << "Pago total: $" << pago_total << endl;

    if (pago_oficina > pago_extra) {
        cout << "El trabajador ganó más dinero por horas de oficina." << endl;
    } else if (pago_extra > pago_oficina) {
        cout << "El trabajador ganó más dinero por horas extras." << endl;
    } else {
        cout << "El trabajador ganó exactamente lo mismo por horas de oficina y horas extras." << endl;
    }

    return 0;
}
