#include <iostream>
using namespace std;
int main (){
int dia, mes;
cout<<"introduce el dia de nacimiento (1-31): ";
cin>>dia;
cout<<"introduce el mes de nacimiento (1-12): ";
cin>>mes;
if((mes==3&&dia>=21)|| (mes==4&&dia<=20)){
    cout<<"tu signo zodiacal es aries "<<endl;
} else if ((mes==4&&dia>=21)|| (mes==5&&dia<=20)){
cout<<"tu signo zodiacal es tauro"<<endl;
} else if ((mes==5&&dia>=21)|| (mes==6&&dia<=20)){
cout<<"tu signo zodiacal es geminis"<<endl;
}else if ((mes==6&&dia>=21)|| (mes==7&&dia<=20)){
cout<<"tu signo zodiacal es cancer"<<endl;
}else if ((mes==7&&dia>=21)|| (mes==8&&dia<=20)){
cout<<"tu signo zodiacal es leo"<<endl;
}else if ((mes==8&&dia>=21)|| (mes==9&&dia<=20)){
cout<<"tu signo zodiacal es virgo"<<endl;
}else if ((mes==9&&dia>=21)|| (mes==10&&dia<=20)){
cout<<"tu signo zodiacal es libra"<<endl;
}else if ((mes==10&&dia>=21)|| (mes==11&&dia<=20)){
cout<<"tu signo zodiacal es escorpio"<<endl;
}else if ((mes==11&&dia>=21)|| (mes==12&&dia<=20)){
cout<<"tu signo zodiacal es sagitario"<<endl;
}else if ((mes==12&&dia>=21)|| (mes==1&&dia<=20)){
cout<<"tu signo zodiacal es capricornio"<<endl;
}else if ((mes==1&&dia>=21)|| (mes==2&&dia<=20)){
cout<<"tu signo zodiacal es acuario"<<endl;
}else if ((mes==2&&dia>=21)|| (mes==3&&dia<=20)){
cout<<"tu signo zodiacal es picis"<<endl;
}
    return 0;
}