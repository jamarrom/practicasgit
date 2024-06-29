#include <iostream>
using namespace std;

int main(){
    int mes, dia;
    cout<<"Escribe tu mes de nacimiento :  ";
    cin>>mes;
    if (mes>12)
    {
        do
        {
            cout<<"Escribe un mes correcto menor a 12 : ";
            cin>>mes;
        } while (mes>12);
        
    }
    
    cout<<"Escribe tu dia de nacimiento : ";
    cin>>dia;
        if (dia>31)
    {
        do
        {
            cout<<"Escribe una fecha correcta menor a 31 : ";
            cin>>dia;
        } while (dia>31);
        
    }

    if ((dia>=21 && mes==3) || (dia<=19 && mes==4))
    {
        cout<<"Tu signo zodiacal es Aries";
    } else if ((dia>=20 && mes==4) || (dia<=20 && mes==5))
    {
        cout<<"Tu signo zodiacal es Tauro";
    } else if ((dia>=21 && mes==5) || (dia<=20 && mes==6))
    {
        cout<<"Tu signo zodiacal es Geminis";
    } else if ((dia>=21 && mes==6) || (dia<=22 && mes==7))
    {
        cout<<"Tu signo zodiacal es Cancer";
    } else if ((dia>=23 && mes==7) || (dia<=22 && mes==8))
    {
        cout<<"Tu signo zodiacal es Leo";
    } else if ((dia>=23 && mes==8) || (dia<=22 && mes==9))
    {
        cout<<"Tu signo zodiacal es Virgo";
    } else if ((dia>=23 && mes==9) || (dia<=22 && mes==10))
    {
        cout<<"Tu signo zodiacal es Libra";
    }  else if ((dia>=23 && mes==10) || (dia<=21 && mes==11))
    {
        cout<<"Tu signo zodiacal es Escorpio";
    } else if ((dia>=22 && mes==11) || (dia<=21 && mes==12))
    {
        cout<<"Tu signo zodiacal es Sagitario";
    } else if ((dia>=22 && mes==12) || (dia<=19 && mes==1))
    {
        cout<<"Tu signo zodiacal es Capricornio";
    } else if ((dia>=20 && mes==1) || (dia<=18 && mes==2))
    {
        cout<<"Tu signo zodiacal es Acuario";
    } else if ((dia>=19 && mes==2) || (dia<=20 && mes==3))
    {
        cout<<"Tu signo zodiacal es Picis";
    }
    
    
}