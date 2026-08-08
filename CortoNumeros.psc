Algoritmo CortoNumeros
	Definir numero, i Como Entero
	Definir esPrimo Como Lógico
	Escribir 'Ingrese un numero entero:'
	Leer numero
	Si numero<2 Entonces
		Escribir 'El numero no es primo ni compuesto.'
	SiNo
		esPrimo <- Verdadero
		Para i<-2 Hasta numero-1 Hacer
			Si numero MOD i=0 Entonces
				esPrimo <- Falso
			FinSi
		FinPara
		Si esPrimo=Verdadero Entonces
			Escribir 'El numero ', numero, ' es primo.'
		SiNo
			Escribir 'El numero ', numero, ' es compuesto.'
		FinSi
	FinSi
FinAlgoritmo
