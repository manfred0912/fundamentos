/*
titulo programa: primer c�digo en c++
Autor: Guti�rrez Padilla Luis Pablo
fecha de creaci�n: 19/10/2020
Fecha de Modificaci�n:
Descripcion: elaborar un programa para convertir una cantidad en pesos a dolares y euros
*/
//agregar la librerias necesarias para la ejecuci�n
#include <iostream>
//abrir un nombre de espacios
using namespace std; //std= sublibreria standar
//declaraci�n de estructuras
//declarar variables globales o constantes globales
//declaraci�n de funciones
//funci�n principal
main()
{
	//declaraci�n de variables o constantes locales 
	//sintaxis tipoDato NombreVariable1[,nombrevariable2[=valorInicial], nombrevariableN]
	//tipoDatos [int,float,char,string]
	float pesos, dolar=20.17;
	//definir una constante como ejemplo(euro)
	//sintaxis cons tipoDato NOMBRECONSTANTE = valor
	const float EURO =27.25;
	//solicitud de los datos de entrada 
	cout << "--- conversion de peso a dolares y euros"<< endl;
	cout << endl;
	cout <<"ingresa el importe en pesos:";
	cin >> pesos;
	cout << "ingresa el valor del dolar";
	cin >> dolar;
	cout<< "ingresa el valor del euro";
	//cin >> EURO; //esta instruccion no es valida no se puede cambiar el valor de una constante
	//proceso de la informaci�n
	//salida de la informaci�n
	cout <<"el importe de $"<<pesos <<"equivale a:"<<endl;
	cout << dolar/pesos <<"dolares." <<endl;
	cout << EURO/pesos << "Euros."<<endl;
}
