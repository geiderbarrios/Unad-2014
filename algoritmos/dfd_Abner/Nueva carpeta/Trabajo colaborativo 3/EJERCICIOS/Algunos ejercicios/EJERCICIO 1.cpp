#include <iostream> 
using namespace std;

int main() 
{
 
 int a;
 char cont[100];
 
 Ingresar:
 cout << "Digite la clave de cuatro digitos: "; cin >> a;
 
 itoa (a,cont,10);
 int lcont = strlen(cont);
 
 if (lcont==4) 
 {
 
 int n1 = a/1000;
 int n2 = a/100 - n1*10;
 int n3 = a/10 - (n1*100 + n2*10);
 int n4 = a - (n1*1000 + n2*100 + n3*10);
 
 int crip = n4*1000 + n3*100 + n2*10 + n1;
 
 cout << "La clave sera enviada como: " << crip <<endl;
}
 else
 {
     cout <<endl<<"La clave debe tener de 4 digitos"<<endl;
     goto Ingresar;
 }

 
 cin.get();
 cin.get();
 return 0;
 
}
