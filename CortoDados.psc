Algoritmo CortoDados
	Definir dado1, dado2, suma Como Entero
	Definir continuar Como Entero
	continuar <- 1
	Mientras continuar=1 Hacer
		dado1 <- Aleatorio(1,6)
		dado2 <- Aleatorio(1,6)
		suma <- dado1+dado2
		Escribir 'Bievenido Jugador. Tire sus dados.'
		Escribir 'Dado Numero 1: ', dado1
		Escribir 'Dado Numero 2: ', dado2
		Escribir 'Resultado de Suma: ', suma
		Si suma=8 Entonces
			Escribir '¡Gano! La suma fue 8.'
			continuar <- 0
		SiNo
			Si suma=7 Entonces
				Escribir 'Perdio. La suma fue 7.'
				continuar <- 0
			SiNo
				Escribir 'La suma no fue 7 ni 8.'
				Escribir '¿Desea lanzar nuevamente?'
				Escribir '1 = Si'
				Escribir '0 = No'
				Leer continuar
			FinSi
		FinSi
	FinMientras
	Escribir 'Fin del juego.'
FinAlgoritmo
