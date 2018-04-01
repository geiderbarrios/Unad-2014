//Nombre del Autor: Geider Barrios Chaverra
//Fecha: 15 de oct de 2014
//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 

Proceso CLAVE
	definir cl,cla Como Caracter;
	definir cont,ex como real;
	cont<-3;
	cla<-'david';
	
	Mientras cont<>0 Hacer
		Escribir "Ingrese la clave, recuerde tiene 3 intentos" ;
		Leer cl;	
		cont<-cont-1;
		Si cl=cla Entonces
			Escribir "Clave correcta";
			cont<-0;
		Sino
			Escribir "Intente nuevamente";
		FinSi
		
		
	FinMientras
	
	
FinProceso
