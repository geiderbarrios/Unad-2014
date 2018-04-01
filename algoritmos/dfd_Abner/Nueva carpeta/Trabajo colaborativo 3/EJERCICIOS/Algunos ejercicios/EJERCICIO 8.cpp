#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

int main() 
{
float suma=0;
float ac;
float i=0;
int n;
float I;
int e;
int g;
int j;
int ASPIRANTES[200];
ac=0;
i=0;
cout<<"Ingrese la cantidad de aspirantes que va a entrvistar"<<endl;
cin>>n;
for (i=1;i<=n;i++) {
cout<<"empeado"<<i<<endl;
cout<<" Es mayor de edad?"<<endl;
cout<<"si=1 no=2"<<endl;
cin>>e;
cout<<"Ingeniero titulado?"<<endl;
cout<<"si=1 no=2"<<endl;
cin>>g;
cout<<"Tiene experiencia laboral?"<<endl;
cout<<"si=1 no=2"<<endl;
cin>>j;
if (e==1 && g==1 && j==1) {
ac=suma+i;
}
}
cout<<"el numero de empleados aceptados es:"<<ac<<endl;
system("pause");
return 0;
}
