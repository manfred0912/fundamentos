Algoritmo entradasDeCine
	Escribir "Este programa tiene como proposito informar al usuario cuanto descuento puede recibir dependiendo del numero de entradas que desee adquirir."
	Escribir "Porfavor digite el numero de entradas que desea comprar, con un limite de 4."
	Leer entradas
	Segun entradas Hacer
		1:
			Escribir "Al ser una sola entrada, no hay descuento aplicable"
		2:
			Escribir "El descuento aplicable por dos entradas es del 5%."
		3:
			Escribir "El descuento aplicable por tres entradas es del 10%."
		4:
			Escribir "El descuento aplicable por cuatro entradas es del 15%."
		De Otro Modo:
			Escribir "No se pueden comprar mas de 4 boletos."
	Fin Segun
FinAlgoritmo
