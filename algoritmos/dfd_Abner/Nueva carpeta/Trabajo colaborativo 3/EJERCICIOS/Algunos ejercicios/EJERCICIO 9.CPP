#include<iostream.h>
#include<conio.h>
void main() {
int valor,x;
long nb,nd;
clrscr();
		for (x=20;x<60;x++){
			gotoxy(x,5); cout<<"Í";
			gotoxy(x,20); cout<<"Í";
		}
		for (x=5;x<20;x++){
			gotoxy(60,x); cout<<"º";
			gotoxy(20,x); cout<<"º";
		}
		gotoxy(20,5); cout<<"É";
		gotoxy(60,5); cout<<"»";
		gotoxy(20,20); cout<<"È";
		gotoxy(60,20); cout<<"¼";

		do {
			valor=0;
			gotoxy(22,9);
			cout<<"Digita un n£mero.:";
			cin>>valor;
		} while(valor>=257 || valor<1);

		gotoxy(22,11);
		nd=1;
		nb=0;
	if (valor!=1){
		do {
			if (valor%2!=0){
				nb=nb+nd;
			}
			valor=valor/2;
			nd=nd*10;
		} while(valor>1);
		nb=nb+nd;
	} else {
		nb=1;
	}
		gotoxy(22,13);
		cout<<nb;
getch();
}