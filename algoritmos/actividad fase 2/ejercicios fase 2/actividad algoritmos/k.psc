Proceso JIMMYPERATLARENJIFO
	//k) Realizar un programa que le presente un menú al usuario con las siguientes opciones:
	//1. Leer dos números enteros positivos únicamente,
	//2. Sumar los dos números leídos,
	//3. Restarle al primer número el segundo (siempre y cuando el primero sea mayor que él segundo, en caso contrario indicar con un mensaje que la operación no es posible realizarla y volver al menú principal,
	//4. Multiplicar los dos números (siempre y cuando ninguno de los números sea igual a cero, , en caso contrario indicar con un mensaje que la operación no es posible realizarla y volver al menú principal,),
	//5. Dividir el primer número dado por el segundo,
	//6 Salir Nota: Se debe garantizar que el usuario haya ingresado los dos números antes de poder realizar cualquier operación y que no se puede escribir un resultado sin la realización de una operación.
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
