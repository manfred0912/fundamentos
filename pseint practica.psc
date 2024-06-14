Algoritmo convertorDeUnidades
	Escribir 'favor de insertar la cantidad de metros a convertir'
	Leer metro1
	Escribir 'favor de escoger a que unidad desea convertir: pies, pulgadas o yardas'
	Leer unidadDeMedida
	Segun unidadDeMedida Hacer
		"pies":
			Resul = metro1*3.28
			Escribir "el resultado es "  Resul " pies"
		"pulgadas":
			Resul = metro1*39.37
			Escribir "el resultado es "  Resul " pulgadas"
		"yardas":
			Resul = metro1*1.09
			Escribir "el resultado es "  Resul " yardas"
	FinSegun
	
FinAlgoritmo
