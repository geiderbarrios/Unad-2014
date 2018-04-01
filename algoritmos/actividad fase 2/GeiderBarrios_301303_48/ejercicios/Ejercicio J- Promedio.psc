//Nombre del Autor: Geider Barrios Chaverra
//Fecha:17/10/2014
//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi //trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 
Proceso ejercicioj
	
	num<-1;
	n<-1;
	Mientras (num !=0) Hacer
		Escribir "Por favor Ingrese un numero"
		
		 Repetir 
			leer num 
			Si num > 0 Entonces
			   suma <- suma+num
			   n<-n+n
		    Sino 
			    Escribir "Numero fuera de rango"
		    fin si
		
	    Hasta Que num = 0;
		
	Fin Mientras
	promedio <-suma /n;
	Escribir "Promedio de los numeros es", promedio;
	
	
FinProceso
