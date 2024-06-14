/*titulo programa: Estructura switch con numeros
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre el nombre del dia de la semana al que corresponde el ingresar un numero del 1 al 7 donde 1 es domingo y 7 es lunes.
*/
#include <iostream>
using namespace std;
main()
{
	int dia;
	cout << "Muestra el dia de la semana correspondiente a un numero" << endl;
	cout << endl;
	cout << "ingresa un dia de la semana del 1 al 7: ";
	cin >> dia;
	switch(dia)
	{
		case 1: cout << "Domingo" << endl; break;
		case 2: cout << "Lunes" << endl; break;
		case 3: cout << "Martes" << endl; break;
		case 4: cout << "Miercoles" << endl; break;
		case 5: cout << "Jueves" << endl; break;
		case 6: cout << "Viernes" << endl; break;
		case 7: cout << "Sabado" << endl; break;
		default: cout << "El dia de la semana proporcionado no existe";
		 				 cout << endl;
	}
	
}
