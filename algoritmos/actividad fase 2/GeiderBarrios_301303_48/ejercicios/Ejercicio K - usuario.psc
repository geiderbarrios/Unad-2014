//Nombre del Autor: Geider barrios chaverra
	//Fecha: 17 de oct de 2014
	//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
	//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 
	
Proceso menu
	//
	Escribir "ingrese los digitos a procesar"
	leer a,b
	Escribir "menu de opciones"
	Escribir "opcion (1) leer dos numeros enteros positivos "
	Escribir "opcion (2) sumar los dos numeros leidos "
	Escribir "opcion (3) diferencia del n1 y n2 si y solo si n1>n2 ,"
	Escribir "opcion (4) multiplicar si n1 y n2 son diferentes a 0 "
	Escribir "opcion (5) division de n1 por n2 "
	leer n
	
	Segun n Hacer
		1: Si a<=0 o b<=0  Entonces
				
				Escribir " VOLVER A MENU PRINCIPAL "
			Sino 
				escribir "CUMPLEN CON LO ESPERADO. ",  a "  y  ", b  " enteros positivos "
			Fin Si
			
		2:c<- a+b
			escribir "el resultado de la suma es de  ",  c
		3:
			Si a>b Entonces
				c1<-a-b
				escribir "la diferencia es de " , c1 
			Sino
				escribir "volver al menu principal" 
			Fin Si
		4:Si a=0 o b=0 Entonces
			ESCRIBIR "VOLVER A MENU PRINCIPAL"
		Sino
			c2=a*b
				escribir "el producto es de "  , c2
			Fin Si
			
		5:c3<- a/b
			escribir "la division es igual a "  ,  c3
		
		Fin Segun
FinProceso
