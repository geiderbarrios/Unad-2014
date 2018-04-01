Proceso Adivina_un_numero
	//Nombre del Autor:Jefersson Ramon Mendez
	//Fecha:29/09/2014
	//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
	//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar
    
	mayor<-1000;
	
    numero<-1+azar(mayor);
	Escribir "Escoge el nivel del juego, digitando el 1 o 2"
	Escribir "(1) Basico"
	Escribir "(2) experto"
	Leer nivel;
	

	Si nivel=1 Entonces
		cercania<-8;
		Dimension cerc[cercania];
		cerc[1]<-"Que se quema";
		cerc[2]<-"Demasiado caliente";
		cerc[3]<-"Más caliente";
		cerc[4]<-"Caliente";
		cerc[5]<-"Frio";
		cerc[6]<-"Más Frio";
		cerc[7]<-"Demasiado Frio";
		cerc[8]<-"Que se congela";
		
		Escribir "Has escogido el nivel Básico"
		Repetir
			
			Escribir "Digita el número que crees que es el correcto"
			Leer n;
			
			oportunidades<-oportunidades+1;
			
			dist<-abs(numero-n);
			
			Si dist>0 Entonces
				cálculo<-1+trunc(ln(dist/(mayor/exp(cercania))));
				Escribir "El número ",n, " está " ,cerc[cálculo];
			Sino
				Escribir "Felicidades!! El número correcto es el ",numero, " y lo adivinaste en un total de ",oportunidades," oportunidades";
			FinSi
			
		Hasta Que n=numero;
	Sino
		cercania<-8;
		Dimension cerc[cercania];
		cerc[1]<-"extremadamente cerca";
		cerc[2]<-"Demasiado cerca";
		cerc[3]<-"Bien cerca";
		cerc[4]<-"Cerca";
		cerc[5]<-"lejos";
		cerc[6]<-"Bien lejos";
		cerc[7]<-"Demasiado lejos";
		cerc[8]<-"Extremadamente lejos";
		
		Escribir "Has escogido el nivel Experto, por lo tanto tendrás solo 5 oportunidades"
		
		Repetir
						
			Escribir "Digita el número que crees que es el correcto"
			Leer n;
			
			oportunidades<-oportunidades+1;
			
			dist<-abs(numero-n);
			
			Si dist>0 Entonces
				cálculo<-1+trunc(ln(dist/(mayor/exp(cercania))));
				Escribir "El número ",n, " está " ,cerc[cálculo];
			Sino
				Escribir "Felicidades!! El número correcto es el ",numero," y lo adivinaste en un total de ",oportunidades," oportunidades";
			FinSi
			
		Hasta Que oportunidades=[5]
	Fin Si
	
	
		
	
FinProceso
