#include<iostream.h>
#include<conio.h>
void main()
{
char a;
int l1,l2,l3;
a ='s';
while (a !='n')
{
clrscr();
cout<<"Digite la medida de unos de los lados : ";
cin>>l1;
cout<<"Digite la medida del otro de los lados : ";
cin>>l2;
cout<<"Digitela ultima medida : ";
cin>>l3;
if (l1 !=l2)
  {
   if (l1 != l3)
     {
      cout<<"el triangulo es escaleno";
      }
    else
     {
       if (l2!=l3)
	{
	 cout<<"el triangulo es isoceles ";
	 }
	else
	{
       cout<<"el triangulo es equilatero";
	}
      }
   }
 else
  {
   if (l1 !=l3)
     {
      cout<<"el triangulo es isoceles";
      }
     else
      {
       if (l2!=l3)
	 {
	 cout<<"el triangulo es isoceles";
	 }
	 else
	 {
	 cout<<"el triangulo es equilatero";
	 }
       }
     }
cout<<"\n\n\n deseas seguir comparando triangulos";
cin>>a;
}
}