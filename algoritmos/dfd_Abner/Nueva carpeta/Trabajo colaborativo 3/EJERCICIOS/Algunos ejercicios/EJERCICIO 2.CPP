#include<iostream.h>
#include<conio.h>

void main()
{
	int d,m,a,nd,b,df,mf,af;
	clrscr();
	do {
		do {
				cout<<"\n \nDigite el d¡a.:";
				cin>>d;
				if ((d<1)||(d>31)) {
					cout<<"Error al digitar el d¡a!!! \n";
				}
		} while ((d<1)||(d>31));
		do {
			cout<<"\n \nDigite el mes.:";
			cin>>m;
				if ((m<1)||(m>12)) {
					cout<<"Error al digitar el mes!!! \n";
				}
		} while ((m<1)||(m>12));
		do {
			cout<<"\n \nDigite el a¤o.:";
			cin>>a;
				if ((a<1900)||(a>3000)) {
					cout<<"Error al digitar el a¤o!!! \n";
				}
		} while ((a<1900)||(a>3000));
		b=1;
		if (a%4!=0) {
			b=0;
		}
		nd=31;
		if ((m==4)||(m==6)||(m==9)||(m==11)) {
			nd=30;
		}
		if (m==2) {
			nd=28;
			if (b==1) {
				nd=29;
			}
		}
		if (d>nd) {
			cout<<"Error de Digitaci¢n!!!\n \n";
		}
	} while (d>nd);
	if ((d+1)<=nd) {
		df=d+1;
		mf=m;
		af=a;
	}
	if ((d+1)>nd) {
		df=1;
		mf=m+1;
		af=a;
		if (mf==13) {
			mf=1;
			af=a+1;
		}
	}
	cout<<"\n\nLa Siguiente Fecha es.:"<<df<<" ,"<<mf<<" ,"<<af;
	getch();
}