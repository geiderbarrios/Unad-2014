#include<iostream.h>
#include<conio.h>

void main()
{
 int n1,n2,n3,n4,n5,n6,cont,clave;
 char s;
 do
 {
 n1=0;
 n2=0;
 n3=0;
 n4=0;
 n5=0;
 n6=0;
 cont=0;
 clave=0;
 clrscr();
 gotoxy(30,25);
 cout<<"Digite la clave:";
 cin>>clave;
 n6=clave/1000;
 n5=clave%1000;
 n4=n5/100;
 n3=n5%100;
 n2=n3/10;
 n1=n3%10;
 cont=(n1*1000)+(n2*100)+(n4*10)+n6;
 clrscr();
 gotoxy(30,25);
 cout<<"la clave encriptada es:"<<cont;
 getch();
 clrscr();
 gotoxy(30,25);
 cout<<"Desea aplicar otra clave:";
 cin>>s;
 }
 while (s != 'n');
 }