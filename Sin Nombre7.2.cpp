/*titulo programa: 
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre el máximo y el mínimo de una lista de números positivos introducidos por teclado, sabiendo que un número negativo termina el ciclo. El negativo no cuenta.
*/
#include <iostream>
using namespace std;

int main () 
{
	int mayor, menor, n;
	do
	{
		cout << "Porfavor ingrese un numero: " << endl;
		cin >> n;
		if (n>mayor)
		{
				mayor=n;
	  }
		else
		{
			if(n<menor)
			menor=n;
		}
	}while(n>1);
	cout << "El numero mayor de esta lista es " << mayor << " y el numero menor es " << menor << endl;
} 
