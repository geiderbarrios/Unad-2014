#include<iostream.h>
#include<conio.h>
void main() {
int n1,n2,n3,valor;
clrscr();
	do {
		cout<<"Digite un n£mero de 3 digitos.:";
		cin>>valor;
		if ((valor>=1000)||(valor<100)) {
			cout<<"error al digitar\n"; }
	} while ((valor<100)||(valor>=1000));
	n1=valor/100;
	n2=(valor/10);
	n3=(valor)-(n2*10);
	if (n1==n3){
		cout<<"\nEste n£mero SI es CAPICUA.";
	}
	if (n1!=n3){
		cout<<"\nEste n£mero NO es CAPICUA.";
	}
getch();
}