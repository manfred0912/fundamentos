Algoritmo cajeroAutomatico
	saldo <- 1000
	Repetir
		Escribir 'Bienvenido a tu cajero automatico, porfavor digite el numero de la opcion que desea realizar.'
		Escribir 'Opcion 1: consulta de saldos'
		Escribir 'Opcion 2: retiro de efectivo.'
		Escribir 'Opcion 3: deposito de efectivo.'
		Escribir 'Opcion 4: recarga de tiempo aire para celular.'
		Leer opc
		Segun opc  Hacer
			1:
				Escribir 'Su saldo actual es de ',saldo,' pesos.'
			2:
				Repetir
					Escribir 'Digite la cantidad de dinero que desea retirar.'
					Leer retiro
					Si retiro>saldo Entonces
						Escribir 'Usted no dispone de los fondos suficientes para realizar esta operacion. Le sugerimos que primero deposite el monto faltante para poder retirar esa cantidad, o bien, puede realizar un pedido de hasta ',saldo,' pesos.'
					SiNo
						Escribir 'Perfecto, su retiro de ',retiro,' pesos se ha efectuado correctamente, su nuevo saldo es ',saldo,' pesos.'
					FinSi
					Escribir '¿Desea realizar otro retiro?'
					Leer val1
				Hasta Que val1='no'
			3:
				Repetir
					Escribir 'Digite la cantidad de dinero que desea depositar.'
					Leer deposito
					saldo <- saldo+deposito
					Escribir 'Perfecto, el deposito se ha efectuado correctamente, su nuevo saldo es ',saldo,' pesos.'
					Escribir '¿Desea realizar otro deposito?'
					Leer val2
				Hasta Que val2='no'
			4:
				Repetir
					Escribir 'Ingrese el numero de telefono al que desea depositar.'
					Leer temp
					Escribir 'Porfavor digite la opcion con la cantidad de tiempo aire que desea depositar.'
					Escribir 'Opcion 1: 20 pesos.'
					Escribir 'Opcion 2: 50 pesos.'
					Escribir 'Opcion 3: 100 pesos.'
					Escribir 'Opcion 4: 200 pesos.'
					Escribir 'Opcion 5: 500 pesos.'
					Leer opc1
					Segun opc1 Hacer
						1:
							Escribir 'Porfavor seleccione si la recarga sera con el saldo de su cuenta o por medio de deposito.'
							Escribir 'Opcion 1: saldo de la tarjeta.'
							Escribir 'opcion 2: deposito.'
							Leer opc2
							Segun opc2  Hacer
								1:
									recarga1 <- 20
									saldo <- saldo-recarga1
									Escribir 'Perfecto, la recarga se ha completado y usted ahora dispone de un saldo de ',saldo,' pesos.'
								2:
									Escribir 'Perfecto, una vez que usted ingrese el dinero, la recarga habra sido completada'
								De Otro Modo:
									Escribir 'Esta opcion no es valida, vuelva a intentarlo.'
							FinSegun
						2:
							Escribir 'Porfavor seleccione si la recarga sera con el saldo de su cuenta o por medio de deposito.'
							Escribir 'Opcion 1: saldo de la tarjeta.'
							Escribir 'opcion 2: deposito.'
							Leer opc2
							Segun opc2  Hacer
								1:
									recarga2 <- 50
									saldo <- saldo-recarga2
									Escribir 'Perfecto, la recarga se ha completado y usted ahora dispone de un saldo de ',saldo,' pesos.'
								2:
									Escribir 'Perfecto, una vez que usted ingrese el dinero, la recarga habra sido completada'
								De Otro Modo:
									Escribir 'Esta opcion no es valida, vuelva a intentarlo.'
							FinSegun
						3:
							Escribir 'Porfavor seleccione si la recarga sera con el saldo de su cuenta o por medio de deposito.'
							Escribir 'Opcion 1: saldo de la tarjeta.'
							Escribir 'opcion 2: deposito.'
							Leer opc2
							Segun opc2  Hacer
								1:
									recarga3 <- 100
									saldo <- saldo-recarga3
									Escribir 'Perfecto, la recarga se ha completado y usted ahora dispone de un saldo de ',saldo,' pesos.'
								2:
									Escribir 'Perfecto, una vez que usted ingrese el dinero, la recarga habra sido completada'
								De Otro Modo:
									Escribir 'Esta opcion no es valida, vuelva a intentarlo.'
							FinSegun
						4:
							Escribir 'Porfavor seleccione si la recarga sera con el saldo de su cuenta o por medio de deposito.'
							Escribir 'Opcion 1: saldo de la tarjeta.'
							Escribir 'opcion 2: deposito.'
							Leer opc2
							Segun opc2  Hacer
								1:
									recarga4 <- 200
									saldo <- saldo-recarga4
									Escribir 'Perfecto, la recarga se ha completado y usted ahora dispone de un saldo de ',saldo,' pesos.'
								2:
									Escribir 'Perfecto, una vez que usted ingrese el dinero, la recarga habra sido completada'
								De Otro Modo:
									Escribir 'Esta opcion no es valida, vuelva a intentarlo.'
							FinSegun
						5:
							Escribir 'Porfavor seleccione si la recarga sera con el saldo de su cuenta o por medio de deposito.'
							Escribir 'Opcion 1: saldo de la tarjeta.'
							Escribir 'opcion 2: deposito.'
							Leer opc2
							Segun opc2  Hacer
								1:
									recarga5 <- 500
									saldo <- saldo-recarga5
									Escribir 'Perfecto, la recarga se ha completado y usted ahora dispone de un saldo de ',saldo,' pesos.'
								2:
									Escribir 'Perfecto, una vez que usted ingrese el dinero, la recarga habra sido completada'
								De Otro Modo:
									Escribir 'Esta opcion no es valida, vuelva a intentarlo.'
							FinSegun
						De Otro Modo:
							Escribir 'Esta opcion no es valida, porfavor intentelo de nuevo.'
					FinSegun
					Escribir '¿Desea hacer otra recarga?'
					Leer val3
				Hasta Que val3='no'
		FinSegun
		Escribir '¿Desea volver al menu principal?'
		Leer menu1
	Hasta Que menu1="no"
	Escribir "Gracias por usar este cajero, que tenga un buen dia."
FinAlgoritmo
