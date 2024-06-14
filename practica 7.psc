Algoritmo conversorDeTemperaturas
	Escribir 'este programa sirve para convertir grados entre celcius, kelvin y farenheit'
	Escribir 'por favor inserte el numero de grados que quiere convertir'
	Leer grados
	Escribir 'por favor inserte que opcion quere utilizar, Celsius a Kelvin, Celsius a Farenheit, Farenheit a Celsius, Farenheit a Kelvin, Kelvin a Celsius o Kelvin a farenheit'
	Leer opcion
	Segun opcion  Hacer
		'Celsius a Kelvin':
			resul <- grados+273.15
			Escribir 'El resultado es ',resul,' Kelvin.'
		'Celsius a Farenheit':
			resul <- (grados)*9/5+32
			Escribir 'El resultado es ',resul,' Farenheit.'
		'Farenheit a Kelvin':
			resul <- (grados-32)*(5/9)+273.15
			Escribir 'El resultado es ',resul,' Kelvin.'
		'Kelvin a Celsius':
			resul <- grados-273.15
			Escribir 'El resultado es ',resul,' Celsius.'
		'Kelvin a Farenheit':
			resul <- ((grados-273.15)*9/5)+32
			Escribir 'El resultado es ',resul,' Farenheit.'
		De Otro Modo:
			Escribir 'Conversión no valida, por favor ingrese una conversión de las antes mencionadas.'
	FinSegun
FinAlgoritmo
