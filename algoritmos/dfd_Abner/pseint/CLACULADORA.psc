Proceso calcula
	escribir "elija la opcion que quiera";
	escribir "1=Suma";
	Escribir "2=Resta";
	Escribir "3=Multiplicacion";
	Escribir "4=Divicion";
	Leer Q ;
	Escribir "introdusca dos cifras";
	Leer b;
	Mientras b<0 Hacer
		Escribir "este numero no es valido introdusca otro numero";
		Leer b;
	FinMientras
	Leer c;
	Mientras c=0 Hacer
		Escribir "este valor no cirbe";
		Leer c;
	FinMientras
	Si a=1 Entonces
		Escribir "vas a sumar";
		d<-d+c;
	Sino
		Si a=2 Entonces
			Escribir "vas a restar";
			d<-d-c;
		Sino
			Si a=3 Entonces
				Escribir "vas a multiplicar";
				d<-d*c;
			Sino
				Si a=4 Entonces
					Escribir "vas a dividir";
					d<-d/c;
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir "su resultado es";
	Escribir d;
	
FinProceso
