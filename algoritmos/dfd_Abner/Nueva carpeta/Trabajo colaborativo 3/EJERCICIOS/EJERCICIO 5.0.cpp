#include<stdio.h>
#include<conio.h>
#include<iostream>

void main()
    {
    using std::cout;
    using std::cin;
    using std::endl;
  
    cout << "\t\t\tPROGRAMA PARA ACCESO DE SEGURIDAD\n\n\n";
	unsigned  int w, x, y, z;
	cout << "INGRESE PASSWORD DE NIVEL 1:\t" ;
    cin >> w;
	cout << "INGRESE PASSWORD DE NIVEL 2:\t";
    cin >> x;
	cout << "INGRESE PASSWORD DE NIVEL 3:\t";
    cin >> y;
	cout << "INGRESE PASSWORD DE NIVEL 4:\t";
    cin >> z;


	if (w == 123 && x == 456 && y == 789 && z == 000)
	{

	cout << "\n\n\t\t**BIENVENIDO ACCESO GARANTIZADO**\n\n";
	}
	else if (w != 123 && x == 456 && y == 789 && z == 000)
	cout << "\n\n!ACCESO DENEGADO!  ***ERROR DE SEGURIDAD NIVEL 1*** \n\n";
	
	else if (w == 123 && x != 456 && y == 789 && z == 000)
	cout << "\n\n!ACCESO DENEGADO!  ***ERROR DE SEGURIDAD NIVEL 2*** \n\n";
	
	else if (w == 123 && x == 456 && y != 789 && z == 000)
	cout << "\n\n!ACCESO DENEGADO!  ***ERROR DE SEGURIDAD NIVEL 3*** \n\n";	
	
	else if (w == 123 && x == 456 && y == 789 && z != 000)
	cout << "\n\n!ACCESO DENEGADO!  ***ERROR DE SEGURIDAD NIVEL 4*** \n\n";

	

    cout << "Gracias Por Su Colaboracion... \n";
 	
	getch();
}
