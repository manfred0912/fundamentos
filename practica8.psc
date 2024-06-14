Algoritmo contadorNumeros
	Escribir "Este programa sirve para determinar la cantidad de numeros positivos de una lista de 20 numeros"
	Para n1<-1 Hasta 20 Hacer
		Escribir "Favor de escribir un numero"
		Leer n
		Si n>0 Entonces
			positivo = positivo+1
		FinSi
	FinPara
	Escribir "el total de numeros positivos es " positivo
FinAlgoritmo
