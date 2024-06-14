/*titulo programa: Estructura switch con numeros
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre el mes y cuantos dias tiene ese mes al que corresponde el ingresar un numero del 1 al 12.
*/
#include <iostream>
using namespace std;
main()
{
	int mes;
	cout << "Muestra el mes y los dias que tiene ese mes correspondiente a un numero" << endl;
	cout << endl;
	cout << "ingresa un mes del año del 1 al 12: ";
	cin >> mes;
	switch(mes)
	{
		case 1: cout << "El mes es enero, cuenta con 31 dias" << endl; break;
		case 2: cout << "El mes es febrero, cuenta con 28 o 29 dias" << endl; break;
		case 3: cout << "El mes es marzo, cuenta con 31 dias" << endl; break;
		case 4: cout << "El mes es abril, cuenta con 30 dias" << endl; break;
		case 5: cout << "El mes es mayo, cuenta con 31 dias" << endl; break;
		case 6: cout << "El mes es junio, cuenta con 30 dias" << endl; break;
		case 7: cout << "El mes es julio, cuenta con 31 dias" << endl; break;
		case 8: cout << "El mes es agosto, cuenta con 31 dias" << endl; break;
		case 9: cout << "El mes es septiembre, cuenta con 30 dias" << endl; break;
		case 10: cout << "El mes es octubre, cuenta con 31 dias" << endl; break;
		case 11: cout << "El mes es noviembre, cuenta con 30 dias" << endl; break;
		case 12: cout << "El mes es diciembre, cuenta con 31 dias" << endl; break;
		default: cout << "El mes proporcionado no existe";
		 				 cout << endl;
	}
	
}
