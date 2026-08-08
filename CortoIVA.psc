Algoritmo CortoIVA
	Definir precioTotal, precioSinIVA, iva Como Real
	Escribir 'Ingrese el precio total en quetzales:'
	Leer precioTotal
	precioSinIVA <- precioTotal/1.12
	iva <- precioTotal-precioSinIVA
	Escribir 'Precio total: Q', precioTotal
	Escribir 'Precio sin IVA: Q', precioSinIVA
	Escribir 'IVA (12%): Q', iva
FinAlgoritmo
