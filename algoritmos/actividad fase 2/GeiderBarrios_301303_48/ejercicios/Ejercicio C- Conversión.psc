Proceso Convertir_numeros_decimales_a_romanos
	//Nombre del Autor: Geider Barrios Chaverra
	//Fecha: 15/10/2014
	//Doy fe que este ejercicio es de mi autoría, en caso de encontrar plagio la nota de todo mi 
	//trabajo debe ser de CERO además de las respectivas sanciones a que haya lugar
	
	
    Repetir
        Escribir "Digite un número menor o igual a 5000";
        Leer n
    Hasta Que n<=5000;
	
	unidades_de_mil<-trunc (n/1000)
	u<-n%1000;
	
	centenas<-TRUNC(u/100);
    c<-u%100;
	
	decenas=TRUNC(c/10);
	
    unidades=n%10;
	
	r<-"";
	Segun unidades_de_mil Hacer
		1:  r<-r+"M";
		2:  r<-r+"MM";
		3:  r<-r+"MMM";
		4:	r<-r+"IV";
		5:	r<-r+"V";
		
		
	Fin Segun
		
	Segun centenas Hacer
		1:  r<-r+"C";
		2:  r<-r+"CC";
		3:  r<-r+"CCC";
		4:  r<-r+"CD";
		5:  r<-r+"D";
        6:  r<-r+"DC";
        7:  r<-r+"DCC";
		8:  r<-r+"DCCC";
		9:  r<-r+"CM";
			
	FinSegun
		
	Segun decenas Hacer
		1:  r<-r+"X";
		2:  r<-r+"XX";
		3:  r<-r+"XXX";
		4:  r<-r+"XL";
		5:  r<-r+"L";
		6:  r<-r+"LX";
		7:  r<-r+"LXX";
		8:  r<-r+"LXXX";
		9:  r<-r+"XC";
	FinSegun
		
	Segun unidades Hacer
		1:  r<-r+"I";
		2:  r<-r+"II";
		3:  r<-r+"III";
		4:  r<-r+"IV";
		5:  r<-r+"V";
		6:  r<-r+"VI";
		7:  r<-r+"VII";
		8:  r<-r+"VIII";
		9:  r<-r+"IX";
	FinSegun
		
	Escribir "El número que ingresaste fué ",n,", y su equivalente en romano es ",r;
		
       
        
     
	
FinProceso
