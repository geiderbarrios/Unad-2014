/*Ejercicio 4. Calcualr el pago de un empleado.*/

#include<iostream.h>
#include<conio.h>

void main()
{

int cat;
float h,pago,desc,neto,sub;

clrscr();

cout << "\t\tPrograma para calcular el pago de un empleado.\n\n";
cout << "El calculo se hace en base a la categoria y las horas trabajadas\n";
cout << "Por favor ingrese la categoria del empleado (1, 2, 3 o 4):\n\n";
cin >> cat;
cout << "\n\n";
cout << "Por favor ingrese las horas laboradas:\n\n";
cin >> h;
cout << "\n\n";


    if (cat==1)
       {
	pago=h*20000;
	desc=pago*0.072;
	if (pago<1000000) sub=pago*0.15;
	neto=sub+pago-desc;
       }
	else if (cat==2)
		{
		pago=h*15000;
		desc=pago*0.072;
		if (pago<1000000) sub=pago*0.15;
		neto=sub+pago-desc;
		}
		else if (cat==3)
			{
			pago=h*10000;
			desc=pago*0.072;
			if (pago<1000000) sub=pago*0.15;
			neto=sub+pago-desc;
			}
			else if (cat==4)
				{
				pago=h*7500;
				desc=pago*0.072;
				if (pago<1000000) sub=pago*0.15;
				neto=sub+pago-desc;
				}
				else
				{
				cout << "Esa categoria no existe, mira la lista.";
				getch();
				}


cout << "Informacion del pago del empleado:\n\n";
cout << "Devengado:      " << pago << "\n";
cout << "Descuento:      " << desc << "\n";
cout << "Subsidio:       " << sub << "\n";
cout << "Total a pagar:  " << neto << "\n\n";
cout << "Gracias... oprima una tecla para terminar";
getch();

}
