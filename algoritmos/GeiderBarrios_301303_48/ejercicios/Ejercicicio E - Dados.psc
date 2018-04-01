//Nombre del Autor:Geider Barrios Chaverra
//Fecha:17/10/2014
//Doy fe que este ejercicio es de mi autoría,en caso de encontrar plagio la nota de todo mi
//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 
Proceso dados
	jug1<-""
	jug2<-""
	saldo1<-0
	saldo2<-0
	acum<-0
	acum1=apuest
	acum2=apuest
	Escribir "ingrese nombre jugador 1";
	leer jug1;
	escribir "ingrese nombre jugador 2";
	leer jug2;
	escribir "ingrese valor de la apuesta ";
	leer apuest;	
	Mientras op<>"s" Hacer
		Escribir "lanzar dados ",jug1 " y ",jug2;
		leer lanzar;		
		num <-azar (6);
		dado1<-num;
		Escribir "el jugador ",jug1 " saco ",dado1;
		num <-azar (6);
		dado2<-num;
		Escribir "el jugador ",jug2 " saco ",dado2;
		
		Si dado1>dado2 Entonces
			Para i<-500 con paso 500 Hasta apuest  Hacer
				acum1<-apuest+i
				acum2<-apuest-i
				Escribir "lanzar dados ",jug1 " y ",jug2;
				leer lanzar;		
				num <-azar (6);
				dado1<-num;
				Escribir "el jugador ",jug1 " saco ",dado1;
				num <-azar (6);
				dado2<-num;
				Escribir "el jugador ",jug2 " saco ",dado2;
				escribir "gano ",jug1
				Escribir "el saldo de ",jug1 " es: ",acum1
				escribir "perdio el jugador " ,jug2
				Escribir "el saldo de " jug2 " es ",acum2
				esperartecla 
				
				
				
			FinPara
		Sino
			Para i<-500 con paso 500 Hasta apuest Hacer
				acum2<-apuest+i
				acum1<-apuest-i
				Escribir "lanzar dados ",jug1 " y ",jug2;
				leer lanzar;		
				num <-azar (6);
				dado1<-num;
				Escribir "el jugador ",jug1 " saco ",dado1;
				num <-azar (6);
				dado2<-num;
				Escribir "el jugador ",jug2 " saco ",dado2;
				escribir "gano ",jug2
				Escribir "el saldo de ",jug2 "  es:",acum2
				escribir "perdio el jugador ",jug1
				Escribir "el saldo de ",jug1 " es " ,acum1
				esperartecla
				
			FinPara
			
		Fin Si
		
		
		
		Escribir "usted desea salir s/n"
		leer op;
	Fin Mientras
FinProceso
