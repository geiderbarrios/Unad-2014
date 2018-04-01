//Realizar un algoritmo que permita validar una clave de 5 dígitos con 3 intentos de acceso, 
//en caso de ingresar de manera errada debe generar el mensaje “Intente Nuevamente”,
//una vez concluidos los  el sistema debe generar un mensaje de bloqueo

//Nombre del Autor: Edgar David Santana
//Fecha: 4 de oct de 2014
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
