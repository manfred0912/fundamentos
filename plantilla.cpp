/*titulo programa: Estructura switch con char
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre palabras de acuerdo a la letra seleccionada.
*/
#include <iostream>
using namespace std;
main()
{
	char letra;
	
	cout << "Palabras de acuerdo a la letra ingresada." <<endl << endl;
	cout << "Proporciona una letra: ";
	cin >> letra;
	switch (letra)
	{
		case 'a': case 'A':
		         cout << "ana, alfalfa, arbol, antilope, anaconda, almendra, etc.";
		          cout << endl;
		          break;
		case 'r': case 'R':
		         cout << "risa, romero, ramon, razon, resta, romina, etc.";
							cout << endl;
							break;
		case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': 
							cout << "Lo que escribiste es numero, no letra.";
							break;	
		default: cout << "No existen por el momento palabras para la ";
						 cout << "letra " << letra << endl;  
	}
}
