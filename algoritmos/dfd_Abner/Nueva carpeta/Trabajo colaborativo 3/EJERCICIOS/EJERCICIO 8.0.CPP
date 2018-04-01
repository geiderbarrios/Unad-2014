#include<iostream.h>
#include<conio.h>
void main()
{
char sa,ing,exp,nombre,a;
int edad,m,i,h,j,t,q,b,w,d,e,f,g;
sa = 's';
g = 0;
m = 0;
t = 45;
f=205;
while (sa != 'n')
 {
 clrscr();
for (i=1;i<= 80;i++)
{ gotoxy(i,1);
a=f;
cout<<a;
 }
for (i=1;i<= 80;i++)
{ gotoxy(i,2);
a=t;
cout<<a;
 }
for (i=1;i<= 80;i++)
{ gotoxy(i,6);
a=t;
cout<<a;
 }
for (i=1;i<= 80;i++)
{ gotoxy(i,7);
a=f;
cout<<a;
 }
 gotoxy (19,3);
 cout<<"UNIVERSIDAD NACIONAL ABIERTA Y A DISTACIA";
 gotoxy(38,4);
 cout<<"UNAD";
 gotoxy(31,5);
 cout<<"CEAD-TURBO - ANT.";
    gotoxy(1,12);
    cout<<"digita la inicial de tu nombre     ";
    gotoxy(70,12);
    cin>>nombre;
    gotoxy(1,14);
    cout<<"cuantos a¤os tienes   ";
    gotoxy(70,14);
    cin>>edad;
    if (edad >= 18)
     {
     gotoxy(1,16);
      cout<<"eres un (i= ingeniero), (t = tenologo) o (n = tecnico)?" ;
      gotoxy(70,16);
      cin>>ing;
       if (ing =='i')
	 {
	 gotoxy(1,18);
	  cout<<"has trabajado alguna vez";
	  gotoxy(70,18);
	  cin>>exp;
	  if (exp == 's')
	    {
	    gotoxy(1,22);
	      cout<<"usted esta apto para cumplir esta labor";
	      g = g +1;
	      m = m + 0;
	      gotoxy(1,24);
	      cout<<"el numero de personas apta ha sido ";
	      gotoxy(70,24);
	      cout<<g;
	      gotoxy(1,25);
	       cout<<"el numero  de personas no apta es ";
	       gotoxy(70,25);
	       cout<<m;
		for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,20);
	       a = f;
	       cout<<a;
	       }
	      }
	      else
	      {
	       gotoxy(1,22);
	       cout<<"\n\nlo sentimos no esta clasificada  ";
	       g = g +0;
	      m = m + 1;
	      gotoxy(1,24);
	      cout<<"\n\n el numero de personas apta ha sido ";
	      gotoxy(70,24);
	      cout<<g;
	      gotoxy(1,25);
	       cout<<"el numero  de personas no apta es ";
	       gotoxy(70,25);
	       cout<<m;
		for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,20);
	       a = f;
	       cout<<a;
	       }
		for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,30);
	       a = f;
	       cout<<a;
	       }
	      }
	      }
		else
	      {
	       gotoxy(1,22);
	       cout<<"\n\nlo sentimos no esta clasificada  ";
	       g = g +0;
	      m = m + 1;
	      gotoxy(1,24);
	      cout<<"\n\n el numero de personas apta ha sido ";
	      gotoxy(70,24);
	      cout<<g;
	      gotoxy(1,25);
	       cout<<"el numero  de personas no apta es ";
	       gotoxy(70,25);
	       cout<<m;
		for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,20);
	       a = f;
	       cout<<a;
	       }
		for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,30);
	       a = f;
	       cout<<a;
	       }
	      }
	      }
		else
	      {
	       gotoxy(1,22);
	       cout<<"\n\nlo sentimos no esta clasificada  ";
	       g = g +0;
	      m = m + 1;
	      gotoxy(1,24);
	      cout<<"\n\n el numero de personas apta ha sido ";
	      gotoxy(70,24);
	      cout<<g;
	      gotoxy(1,25);
	       cout<<"el numero  de personas no apta es ";
	       gotoxy(70,25);
	       cout<<m;
	       for (i=1;i<=80;i=i+2)
	       {
	       gotoxy(i,30);
	       a = f;
	       cout<<a;
	       }
	      }
	for (i=1;i<=80;i=i +2)
	       {
	       gotoxy(i,30);
	       a = f;
	       cout<<a;
	       }
	       gotoxy(1,30);
  cout <<"\n\ndeseas seguir con el programa";
  cin>>sa;
}
}
