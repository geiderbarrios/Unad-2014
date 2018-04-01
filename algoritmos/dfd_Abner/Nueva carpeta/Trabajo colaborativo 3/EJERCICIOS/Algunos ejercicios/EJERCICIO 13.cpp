#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
#define SIN_TIPO float
float salir;
float n;
float x;
int opcion;
float r;
float f;
string primo;
float nu;
int main() {
salir=0;
cout<<"Ingresar Numero:"<<endl;
cin>>n;
do {
cout<<" "<<endl;
cout<<"Presione Enter para continuar"<<endl;
cin>>x;
cout<<"1 - Seno, Coseno, ArcoTangente"<<endl;
cout<<"2 - Lograritmo Natural, Funcion Exponencial"<<endl;
cout<<"3 - Truncar, Redondear"<<endl;
cout<<"4 - Raiz Cuadrada"<<endl;
cout<<"5 - Valor Absoluto"<<endl;
cout<<"6 - Separar parte entera y decimal"<<endl;
cout<<"7 - Hallar Factorial"<<endl;
cout<<"8 - Averiguar si es primo"<<endl;
cout<<"9 - Ingresar Otro Numero"<<endl;
cout<<" "<<endl;
cout<<"0 - para Salir"<<endl;
cout<<" "<<endl;
cin>>opcion;
switch (opcion) {
case 1:
cout<<"Seno:"<<sin(n)<<endl;
cout<<"Coseno:"<<cos(n)<<endl;
cout<<"ArcTangente:"<<atan(n)<<endl;
break;
case 2:
if (n<=0) {
cout<<"El numero debe ser mayor a cero!"<<endl;
} 
else {
cout<<"Log Nat.:"<<log(n)<<endl;
cout<<"Func Expon.:"<<exp(n)<<endl;
}
break;
case 3:
cout<<"Turncar:"<<floor(n)<<endl;
cout<<"Redondear:"<<ceil(n+.5)<<endl;
break;
case 4:
cout<<"Raiz Cuad.:"<<sqrtf(n)<<endl;
break;
case 5:
cout<<"Valor Abs.:"<<abs(n)<<endl;
break;
case 6:
cout<<"Parte Entera:"<<floor(n)<<endl;
cout<<"Parte Decimal:"<<n-floor(n)<<endl;
break;
case 7:
if (n!=floor(n)) {
cout<<"El numero debe ser entero!"<<endl;
} 
else {
if (abs(n)>50) {
cout<<"Resultado muy grande!"<<endl;
} 
else {
r=1;
f=1;
while (f<=abs(n)) {
if (n<0) 
{
r=(-f)*r;
} 
else {
r=f*r;
}
f=f+1;
}
cout<<"Factorial:"<<r<<endl;
}
}
break;
case 8:
if (n!=floor(n)) {
cout<<"El numero debe ser entero!"<<endl;
} 
else {
primo="Si";
if (n/2==floor(n/2)) {
primo="No";
}
if (n<0) {
nu=n*-1;
} 
else {
nu=n;
}
nu=sqrtf(nu);
f=3;
while (f<=nu && primo=="Si") {
if (n/f==floor(n/f)) {
primo="No";
}
f=f+2;
}
cout<<"Numero Primo:"<<primo<<endl;
if (f==3) {
f=4;
}
if (primo=="No") {
cout<<n<<"="<<f-2<<"x"<<n/(f-2)<<endl;
}
}
break;
case 9:
cout<<"Ingrese Numero:"<<endl;
cin>>n;
break;
case 0:
salir=1;
break;
default:
cout<<"Opcion No Valida!"<<endl;
break;
}
} 
while (salir==1);
system("pause");
return 0;
}

