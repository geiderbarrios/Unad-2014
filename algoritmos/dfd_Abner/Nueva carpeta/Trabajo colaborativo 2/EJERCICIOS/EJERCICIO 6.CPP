#include<iostream.h>
#include<conio.h>
void main() {
int valor,x,y;
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

		gotoxy(22,9);
		cout<<"Digita un n£mero.:";
		cin>>valor;
		gotoxy(22,11);
		if (valor%2!=0) {
			cout<<"Este n£mero NO es PAR";
		}
		if (valor%2==0) {
			cout<<"Este n£mero SI es PAR";
		}
		y=0;
		for (x=1;x<=valor;x++) {
			if (valor%x==0) {
				y++;
				if (y>2) {
					x=valor;
				}
			}
		}
		gotoxy(22,13);
		if (y<=2) {
			cout<<"Es PRIMO!!!";
		}
		if (y>2) {
			cout<<"NO es PRIMO!!!";
		}
getch();
}