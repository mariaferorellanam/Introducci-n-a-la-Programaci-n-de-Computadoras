Algoritmo CortoEstudiante
	Definir calificaciones Como Real
	Dimensionar calificaciones(5)
	Definir i, j Como Entero
	Definir suma, media Como Real
	Definir mediana, moda Como Real
	Definir rango, varianza Como Real
	Definir frecuencia, mayorFrecuencia Como Entero
	Definir temp Como Real
	// El Estudiante ingresa sus 5 notas
	Escribir 'Registro de Calificaciones de Estudiante:'
	Para i<-1 Hasta 5 Hacer
		Escribir 'Ingrese su calificacion obtenida: ', i, ':'
		Leer calificaciones[i]
	FinPara
	// Realizar el calculo de la sumatoria
	suma <- 0
	Para i<-1 Hasta 5 Hacer
		suma <- suma+calificaciones[i]
	FinPara
	// Realizar el calculo de la media
	media <- suma/5
	// Realizar la organizacion de las calificaciones de menor a mayor.
	Para i<-1 Hasta 4 Hacer
		Para j<-i+1 Hasta 5 Hacer
			Si calificaciones[i]>calificaciones[j] Entonces
				temp <- calificaciones[i]
				calificaciones[i] <- calificaciones[j]
				calificaciones[j] <- temp
			FinSi
		FinPara
	FinPara
	// Realizar el calculo de la mediana
	mediana <- calificaciones[3]
	// Realizar el calculo de el rango
	rango <- calificaciones[5]-calificaciones[1]
	// Realizar el calculo de la moda
	mayorFrecuencia <- 0
	moda <- calificaciones[1]
	Para i<-1 Hasta 5 Hacer
		frecuencia <- 0
		Para j<-1 Hasta 5 Hacer
			Si calificaciones[i]=calificaciones[j] Entonces
				frecuencia <- frecuencia+1
			FinSi
		FinPara
		// Realizar el calculo de la varianza
		varianza <- 0
		Para i<-1 Hasta 5 Hacer
			varianza <- varianza+(calificaciones[i]-media)^2
		FinPara
		varianza <- varianza/5
		// Realizar el calculo de la desviacion estandar
		desviacion <- RC(varianza)
		// Mostrar los resultados al estudiante
		Escribir 'Moda: ', moda
		Escribir 'Media: ', media
		Escribir 'Mediana: ', mediana
		Escribir 'Rango: ', rango
		Escribir 'Varianza: ', varianza
		Escribir 'Desviacion Estandar: ', desviacion
	FinPara
FinAlgoritmo
