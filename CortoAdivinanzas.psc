Algoritmo CortoAdivinanzas
	Definir opcion, i, puntos Como Entero
	Definir nombre, respuesta Como Cadena
	Repetir
		Escribir ''
		Escribir ' Juego de las Adivinazas.'
		Escribir '1. Jugar a las adivinanzas'
		Escribir '2. Ver historial de jugadores'
		Escribir '3. Borrar historial de jugadores'
		Escribir '4. Salir'
		Escribir 'Seleccione una opcion:'
		Leer opcion
		Según opcion Hacer
			1:
				puntos <- 0
				Escribir ''
				Escribir 'Adivinanzas'
				Escribir '1. Tengo agujas y no se coser. ¿Que soy?'
				Leer respuesta
				Si respuesta='reloj' Entonces
					puntos <- puntos+1
					Escribir '¡Correcto!'
				SiNo
					Escribir 'Incorrecto. La respuesta era: reloj.'
				FinSi
				Escribir '2. Blanca por dentro, verde por fuera. ¿Que soy?'
				Leer respuesta
				Si respuesta='pera' Entonces
					puntos <- puntos+1
					Escribir '¡Correcto!'
				SiNo
					Escribir 'Incorrecto. La respuesta era: pera.'
				FinSi
				Escribir '3. Tiene dientes y no puede comer. ¿Que es?'
				Leer respuesta
				Si respuesta='peine' Entonces
					puntos <- puntos+1
					Escribir '¡Correcto!'
				SiNo
					Escribir 'Incorrecto. La respuesta era: peine.'
				FinSi
				Escribir '4. Vuelo sin alas y lloro sin ojos. ¿Que soy?'
				Leer respuesta
				Si respuesta='nube' Entonces
					puntos <- puntos+1
					Escribir '¡Correcto!'
				SiNo
					Escribir 'Incorrecto. La respuesta era: nube.'
				FinSi
				Escribir '5. Cuanto mas quitas, mas grande se vuelve. ¿Que es?'
				Leer respuesta
				Si respuesta='agujero' Entonces
					puntos <- puntos+1
					Escribir '¡Correcto!'
				SiNo
					Escribir 'Incorrecto. La respuesta era: agujero.'
				FinSi
				Escribir ''
				Escribir 'Tu puntuacion es: ', puntos, ' de 5'
				Escribir 'Ingrese su nombre:'
				Leer nombre
				Escribir 'Puntuacion guardada.'
			2:
				Escribir ''
				Escribir 'Historial de Jugadores'
				Escribir 'Mostrar nombres y puntuaciones guardadas.'
			3:
				Escribir ''
				Escribir 'Borrar Historial'
				Escribir 'Historial eliminado.'
			4:
				Escribir 'Gracias por jugar.'
			De Otro Modo:
				Escribir 'Opcion no valida.'
		FinSegún
	Hasta Que opcion=4
FinAlgoritmo
