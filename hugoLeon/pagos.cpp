#include <iostream>
using namespace std;
int main (){
    int horas_oficina, horas_extra;
double tarifa_oficina = 10.0;
double tarifa_extra = 15.0;
cout<<"intruduce el numero de horas trabajadas en horario de oficina: ";
cin>>horas_oficina;
cout<<"introduce el numero de horas trabajadas en horarios extra: ";
cin>>horas_extra;
double pago_total= (horas_oficina*tarifa_oficina)+(horas_extra*tarifa_extra);
cout<<"el total de dinero a recibir es: $"<<pago_total<<" dollares"<<endl;
if ((horas_extra*tarifa_extra)>(horas_oficina*tarifa_oficina)) {
    cout<<"ganaste mas dinero por horas extras que por horas de oficina "<<endl;
}else if ((horas_extra*tarifa_extra)<(horas_oficina*tarifa_oficina)){
    cout<<"ganaste mas dinero por horas de oficina que de horas extra "<<endl;
}else {
    cout<<"ganaste la misma cantidad de dinero por horas extra y horas de oficina."<<endl;
}
 return 0;
}