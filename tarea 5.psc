Algoritmo tarea5
	Escribir 'Este programa tiene diversas funciones, entre ellas:'
	Escribir '1: Un programa que solicita 2 numeros reales para determinar los resultados de suma, resta, multiplicacion y division entre ellos'
	Escribir '2: Un programa que permite mostrar y multiplicar los multiplos de 11 comprendidos entre 11 y 110'
	Escribir '3: Un programa para determinar la etapa de vida de una persona de acuerdo a la edad ingresada por el usuario'
	Escribir '4: Un programa que permita sumar los primeros 25 numeros impares de una lista hecha por el usuario y muestre su resultado'
	Escribir '5: Un programa para convertir divisas'
	Escribir '6: Un programa que calcula el promedio de un estudiante'
	Repetir
		Escribir 'Porfavor introduzca el numero del programa que desea ejecutar'
		Leer programa
		Segun programa  Hacer
			1:
				Escribir 'porfavor inserte el primer numero real'
				Leer n1
				Escribir 'Porfavor inserte el segundo numero real'
				Leer n2
				Escribir 'Porfavor introduzca el numero de la operacion que desea ejecutar, 1: suma, 2: resta, 3: multiplicacion, 4: division'
				Leer operacion
				Segun operacion  Hacer
					1:
						resul <- n1+n2
						Escribir 'El resultado de esta operacion es ',resul
					2:
						resul <- n1-n2
						Escribir 'El resultado de esta operacion es ',resul
					3:
						resul <- n1*n2
						Escribir 'El resultado de esta operacion es ',resul
					4:
						resul <- n1/n2
						Escribir 'El resultado de esta operacion es ',resul
					De Otro Modo:
						Escribir 'Porfavor introduzca un numero valido'
				FinSegun
			2:
				Escribir 'Como este programa puede mostrar los multiplos de 11 comprendidos entre 11 y 110, es necesario que usted ingrese el numero con el cual quiere multiplicar el 11, siendo los numeros disponibles del 1 al 10'
				Repetir
					Escribir 'Porfavor introduzca el numero a multiplicar'
					Leer n1
					Segun n1  Hacer
						1:
							Escribir 'Ha seleccionado la multiplicacion de 11*1'
							Escribir 'El resultado es igual a 11'
						2:
							Escribir 'Ha seleccionado la multiplicacion de 11*2'
							Escribir 'El resultado es igual a 22'
						3:
							Escribir 'Ha seleccionado la multiplicacion de 11*3'
							Escribir 'El resultado es igual a 33'
						4:
							Escribir 'Ha seleccionado la multiplicacion de 11*4'
							Escribir 'El resultado es igual a 44'
						5:
							Escribir 'Ha seleccionado la multiplicacion de 11*5'
							Escribir 'El resultado es igual a 55'
						6:
							Escribir 'Ha seleccionado la multiplicacion de 11*6'
							Escribir 'El resultado es igual a 66'
						7:
							Escribir 'Ha seleccionado la multiplicacion de 11*7'
							Escribir 'El resultado es igual a 77'
						8:
							Escribir 'Ha seleccionado la multiplicacion de 11*8'
							Escribir 'el resultado es igual a 88'
						9:
							Escribir 'Ha seleccionado la multiplicacion de 11*9'
							Escribir 'El resultado es igual a 99'
						10:
							Escribir 'Ha seleccionado la multiplicacion de 11*10'
							Escribir 'El resultado es igual a 110'
						De Otro Modo:
							noValido <- n1
							Escribir 'Porfavor introduzca un numero del 1 al 10'
					FinSegun
				Hasta Que n1!=noValido
			3:
				Repetir
					Escribir 'Porfavor ingrese su edad'
					Leer edad
					Si edad>115 Entonces
						Escribir 'No se ha comprobado que alguien viva tanto tiempo'
					SiNo
						Si edad>=101 Entonces
							Escribir 'Es un record de vida'
						SiNo
							Si edad>=65 Entonces
								Escribir 'Es un adulto mayor'
							SiNo
								Si edad>=18 Entonces
									Escribir 'Es un adulto'
								SiNo
									Si edad>=13 Entonces
										Escribir 'Es un adolescente'
									SiNo
										Si edad>=1 Entonces
											Escribir 'Es un niño'
										SiNo
											Escribir 'no es una edad valida'
										FinSi
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				Hasta Que edad>=1
			4:
				condicion <- 0
				resul <- 0
				Repetir
					Escribir 'Porfavor inserte un numero'
					Leer n1
					Si n1 MOD 2<>0 Entonces
						condicion <- condicion+1
						resul <- resul+n1
					FinSi
				Hasta Que condicion=25
				Escribir 'El resultado de la suma de los primeros 25 numeros impares de la lista es igual a ',resul
			5:
				Escribir 'Este programa tiene como finalidad el cambio de divisas, las opciones disponibles son 1: dolar a peso mexicano, 2: dolar a dolar canadiense y 3: dolar a euro.'
				Escribir 'Porfavor inserte el numero de la opcion que quiere usar'
				Leer n1
				Segun n1  Hacer
					1:
						Escribir 'Porfavor inserte la cantidad de dinero a convertir'
						Leer n2
						resul <- n2*21.5
						Escribir 'la cantidad de dinero en pesos mexicanos es ',resul
					2:
						Escribir 'Porfavor inserte la cantidad de dinero a convertir'
						Leer n2
						resul <- n2*1.31
						Escribir 'la cantidad de dinero en dolar canadiense es ',resul
					3:
						Escribir 'Porfavor inserte la cantidad de dinero a convertir'
						Leer n2
						resul <- n2*0.85
						Escribir 'la cantidad de dinero en euro es ',resul
					De Otro Modo:
						Escribir 'Porfavor inserte una opcion valida'
				FinSegun
			6:
				calificaciones <- 0
				promedio <- 0
				Escribir 'Para parar la introduccion de calificaciones y sacar el promedio de ellas, favor de insertar el numero 0'
				Repetir
					Escribir 'Porfavor inserte una calificacion'
					Leer n1
					calificaciones <- calificaciones+1
					promedio <- promedio+n1
				Hasta Que n1=0
				resul <- promedio/calificaciones
				Escribir 'El promedio de las calificaciones introducidas es ',resul
			De Otro Modo:
				Escribir 'Porfavor introduzca un numero valido'
		FinSegun
		Escribir '¿Desea volver a ejecutar un programa?'
		Leer condicional
	Hasta Que condicional='no'
	Escribir 'Gracias por usar este programa'
FinAlgoritmo
