Proceso JIMMYPERATLARENJIFO
	//k) Realizar un programa que le presente un men� al usuario con las siguientes opciones:
	//1. Leer dos n�meros enteros positivos �nicamente,
	//2. Sumar los dos n�meros le�dos,
	//3. Restarle al primer n�mero el segundo (siempre y cuando el primero sea mayor que �l segundo, en caso contrario indicar con un mensaje que la operaci�n no es posible realizarla y volver al men� principal,
	//4. Multiplicar los dos n�meros (siempre y cuando ninguno de los n�meros sea igual a cero, , en caso contrario indicar con un mensaje que la operaci�n no es posible realizarla y volver al men� principal,),
	//5. Dividir el primer n�mero dado por el segundo,
	//6 Salir Nota: Se debe garantizar que el usuario haya ingresado los dos n�meros antes de poder realizar cualquier operaci�n y que no se puede escribir un resultado sin la realizaci�n de una operaci�n.
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
