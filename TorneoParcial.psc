Algoritmo Torneo
	Definir opcion Como Entero
	Definir total_equipos Como Entero
	Definir max_pt, max_dg Como Entero
	Definir campeon Como Caracter
	
	Definir nombre Como Caracter
	Definir partidosg, partidose, partidosp Como Entero
	Definir golesf, golesc Como Entero
	Definir pg, pp, pe, pt, dg Como Entero
	Definir total_partidos_equipo Como Entero
	
	total_equipos <- 0
	max_pt <- -1
	max_dg <- -9999
	campeon <- ""
	
	Repetir
		Escribir "Estadisticas de Torneo!"
		Escribir "1. - Ingrese el Nombre del Equipo:"
		Escribir "2.- Mostrar Posiciones de los Equipos:"
		Escribir "3. - Datos del Equipo Ganador:"
		Escribir "4.- Actualizar Datos de Equipos Ingresados:"
		Escribir "5.- Salir"
		Leer opcion
		
		Segun opcion Hacer 
			1:
				Escribir "Ingrese el Nombre del Equipo:"
				Leer nombre;
				
				Repetir
					Repetir
						Escribir "Ingrese la Cantidad de Partidos Ganados:"
						Leer partidosg;
						Si partidosg < 0 Entonces
							Escribir "Error: No puede ingresar datos negativos."
						FinSi
					Hasta Que partidosg >= 0
					
					Repetir
						Escribir "Ingrese la Cantidad de Partidos Perdidos:"
						Leer partidosp;
						Si partidosp < 0 Entonces
							Escribir "Error: No puede ingresar datos negativos."
						FinSi
					Hasta Que partidosp >= 0
					
					Repetir
						Escribir "Ingrese la Cantidad de Partidos Empatados:"
						Leer partidose;
						Si partidose < 0 Entonces
							Escribir "Error: No puede ingresar datos negativos."
						FinSi
					Hasta Que partidose >= 0
					
					total_partidos_equipo <- partidosg + partidosp + partidose
					
					Si total_partidos_equipo <= 10 Entonces
						Escribir "Error: Los partidos jugados deben ser más de 10. Usted ingresó un total de: ", total_partidos_equipo
					FinSi
				Hasta Que total_partidos_equipo > 10
				
				Repetir
					Escribir "Ingrese la Cantidad de Goles a Favor:"
					Leer golesf;
					Si golesf < 0 Entonces
						Escribir "Error: No puede ingresar datos negativos."
					FinSi
				Hasta Que golesf >= 0
				
				Repetir
					Escribir "Ingrese la Cantidad de Goles en Contra:"
					Leer golesc;
					Si golesc < 0 Entonces
						Escribir "Error: No puede ingresar datos negativos."
					FinSi
				Hasta Que golesc >= 0
				
				pg <- partidosg * 3
				pp <- partidosp * 0
				pe <- partidose * 1
				pt <- pg + pe
				dg <- golesf - golesc
				
				total_equipos <- total_equipos + 1
				
				Si pt > max_pt Entonces
					max_pt <- pt
					max_dg <- dg
					campeon <- nombre
				Sino
					Si pt == max_pt Entonces
						Si dg > max_dg Entonces
							max_dg <- dg
							campeon <- nombre
						FinSi
					FinSi
				FinSi
				Escribir "El Equipo ha sido Registrado."
				
			2:
				Si total_equipos < 4 Entonces
					Escribir "Inválido. 4 equipos como mínimo deben de ser ingresados. Usted Ingresó: ", total_equipos
				Sino
					Escribir "Posiciones de Equipos:"
					Escribir "Se Ingresaron ", total_equipos, " Equipos Correctamente."
					Escribir "Último Equipo Ingresado: ", nombre
					Escribir "Puntos Totales: ", pt
					Escribir "Diferencia de Goles: ", dg
				FinSi
				
			3:
				Si total_equipos < 4 Entonces
					Escribir "Inválido. 4 equipos como mínimo deben de ser ingresados. Usted Ingresó: ", total_equipos
				Sino
					Escribir "Datos del Equipo Ganador"
					Escribir "Equipo ganador: ", campeon
					Escribir "Puntos Totales: ", max_pt
					Escribir "Diferencia de Goles (Criterio de Desempate): ", max_dg
				FinSi
				
			4:
				total_equipos <- 0
				max_pt <- -1
				max_dg <- -9999
				campeon <- ""
				Escribir "Se han Actualizado los Datos de los Equipos Ingresados."
				
			5:
				Escribir "Saliendo del Programa..."
				
			De Otro Modo:
				Escribir "Opción Inválida."
				
		FinSegun
		
	Hasta Que opcion == 5
FinAlgoritmo