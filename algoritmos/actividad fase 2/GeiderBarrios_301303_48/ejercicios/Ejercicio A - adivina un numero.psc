//Nombre del Autor: Geider Barrios Chaverra
//Fecha: 15 de oct de 2014
//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 

Proceso Adivinar
	
	Definir x,b,e,secr,int,cont,cont2 como reales;
	secr<-azar(1000);
	cont<-0;
	cont2<-5;
	Escribir "que nivel desea interactuar, basico y experto, 1. para nivel basico, 2. para nivel experto";
	Leer x;
		
	Segun x Hacer
		1:
			escribir "ingrese el numero a adivinar";
			leer b;
			Mientras b<>secr Hacer
				Si b<secr Entonces
					Escribir "caliente";
				Sino
					Escribir "frio";
				FinSi
				cont<-cont+1;
				leer b;
				
			FinMientras
			
			Si b=secr Entonces
				Escribir "numero adivinado, este es,  ", b, "hiciste ", cont, "intentos";
			
			FinSi
		2:
			Escribir "ingrese el numero a adivinar solotiene 5 intentos";
			Leer b;
			Mientras b<>secr & cont2>1 Hacer
				Si b>secr Entonces
					Escribir "lejos";
				Sino
					Escribir "cerca";
				FinSi
				cont2<-cont2-1;
				Escribir "le quedan ", cont2,  "  intentos";
				leer b;
			FinMientras
			
			Si b=secr Entonces
				Escribir "muy bien este es el numero";
			Sino
				Escribir "el numero era", secr;
			FinSi
			
			
			
		
	FinSegun
	
	
FinProceso

