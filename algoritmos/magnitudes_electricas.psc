Proceso ley
	escribir ' indique que magitud  electrica quiere  calcular'
	escribir  ' 1 para calcular la corriente'
	escribir  ' 2 para calcular el voltaje'
	escribir  ' 3 para calcular la resistencia'
	escribir  ' 4 para calcular  la potencia'
	escribir  ' 5 para calcular la energia electrica'
	escribir  '6 salir'
	leer magn
	Si magn=1 Entonces
		escribir ' indique el voltaje aplicado '
		leer  voltaje
		escribir ' indique la resistencia '
		leer  resistencia
		corriente<- voltaje/resistencia
		escribir ' la corriente del circuito es ',corriente ' amperios'
		
	fin si
		Si magn=2 Entonces
			escribir ' indique la corrientee '
			leer  corriente
			escribir ' indique la resistencia '
			leer  resistencia
			voltaje<- corriente*resistencia
			escribir ' el voltaje del circuito es ', voltaje ' voltios'
			
		Fin Si
		Si magn=3 Entonces
			escribir ' indique el voltaje '
			leer  voltaje
			escribir ' indique la corriente '
			leer  corriente
			resistencia<- voltaje/corriente
			escribir ' la resistencia del circuito es ', resistencia ' ohmios'
			
		fin si
		Si magn=4 Entonces
			escribir ' indique el voltaje aplicado'
			leer voltaje
			escribir 'indique la corriente '
			leer corriente
			potencia<- voltaje*corriente
			escribir ' la potencia  es ', potencia ' watioss'
		Fin Si
		Si magn=5 Entonces
			escribir ' indique la potencia  en kilowatios aplicada'
			leer potencia
			escribir ' indique el tiempo en horas '
			leer tiempo
			energia <- potencia*tiempo 
			escribir ' la energia electrica consumida es ' , energia ' kilovatios por horas'
		
		Fin Si
		Si magn=6 Entonces
			escribir ' salir'
		
		Fin Si
FinProceso
