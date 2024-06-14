Algoritmo localizadorCuadrante
	Escribir 'Este programa sirve para detectar en que cuadrante de un plano cartesiano se encuentran las coordenadas que el usuario introduzca.'
	Escribir 'Por favor introduzca la primera coordenada.'
	Leer coordenada1
	Escribir 'Por favor introduzca la segunda coordenada.'
	Leer coordenada2
	Si coordenada1>0 Entonces
		Si coordenada2>0 Entonces
			Escribir 'Las coordenadas se encuentran en el primer cuadrante.'
		SiNo
			Si coordenada2<0 Entonces
				Escribir 'Las coordenadas se encuentran en el segundo cuadrante.'
			SiNo
				Escribir 'Las coordenadas se encuentran en el primer cuadrante.'
			FinSi
		FinSi
	SiNo
		Si coordenada1<0 Entonces
			Si coordenada2>0 Entonces
				Escribir 'Las coordenadas se encuentran en el cuarto cuadrante.'
			SiNo
				Si coordenada2<0 Entonces
					Escribir 'Las coordenadas se encuentran en el tercer cuadrante.'
				SiNo
					Escribir 'Las coordenadas se encuentran en el cuarto cuadrante.'
				FinSi
			FinSi
		SiNo
			Si coordenada1=0 Entonces
				Si coordenada2>0 Entonces
					Escribir "Las coordenadas se encuentran en el primer cuadrante."
				SiNo
					Si coordenada2<0 Entonces
						Escribir "Las coordenadas se encuentran en el segundo cuadrante."
					SiNo
						Escribir "Las coordenadas se encuentran en el punto de origen."
					FinSi
				FinSi
			SiNo
				Escribir "Favor de introducir un numero valido."
			FinSi
		FinSi
	FinSi
FinAlgoritmo
