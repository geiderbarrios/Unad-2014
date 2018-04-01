//Nombre del Autor: Edgar David Santana
//Fecha: 4 de oct de 2014
//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 

Proceso MES
	definir m como entero;
	
	Escribir "ingresa el mes en nuemros para indicar cuantos dias tiene este mes";
	Leer m;
	
	Segun m Hacer
		1:
			Escribir "ESTE MES ENERO Y TIENE 31 DIAS";
		2:
			Escribir "ESTE MES FEBRERO Y TIENE 28 DIAS Y SI ES BISIESTO TIENE 29 DIAS";
		3:
			Escribir "ESTE MES MARZO Y TIENE 31 DIAS";
		4:
			Escribir "ESTE MES ABRIL Y TIENE 30 DIAS";
		5:
			Escribir "ESTE MES MAYO Y TIENE 31 DIAS";
		6:
			Escribir "ESTE MES JUNIO Y TIENE 30 DIAS";
		7:
			Escribir "ESTE MES JULIO Y TIENE 31 DIAS";
		8:
			Escribir "ESTE MES AGOSTO Y TIENE 31 DIAS";
		9:
			Escribir "ESTE MES SEPTIEMBRE Y TIENE 30 DIAS";
		10:
			Escribir "ESTE MES OCTUBRE Y TIENE 31 DIAS";
		11:
			Escribir "ESTE MES NOVIEMBRE Y TIENE 30 DIAS";
		12:
			Escribir "ESTE MES DICIEMBRE Y TIENE 31 DIAS";
			
		De Otro Modo:
			Escribir "NUMERO DE MES NO INDICADO";
	FinSegun
FinProceso
