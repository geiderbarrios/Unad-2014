//Nombre del Autor: Edgar David Santana
//Fecha: 4 de oct de 2014
//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar 

Proceso Calculadora
	Definir a,b,c,op como real;
	Definir t como caracter; 
	t<-'=';
	
	Escribir "indique . para continuar";
	Leer t;
	
	Mientras t<>'=' Hacer
		Escribir "programa bascico de 4 operaciones de la calculadora. 1.sumar, 2. restar, 3. multiplicar, 4. dividir";
		Leer c;
		Segun c Hacer
		1:
			Escribir "Operacion de suma, ingrese dos valores a sumar";
			Leer a,b;
			op<-a+b;
			
		2:
			Escribir "Operacion de resta, ingrese dos valores a restar";
			Leer a,b;
			op<-a-b;
		3:
			Escribir "Operacion de multiplicar, ingrese dos valores a multiplicar";
			Leer a,b;
			op<-a*b;
		4: 
			Escribir "Operacion de dividir, ingrese dos valores a dividir";
			Leer a,b;
			op<-a/b;
		
		FinSegun
	 Escribir "escriba = para terminar";
	 leer t;
		
	FinMientras
	
	Si t='=' Entonces
		Escribir "el resultado es ", op;
	FinSi
	
	
	FinProceso
