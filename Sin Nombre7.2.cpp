/*titulo programa: 
Autor: Guti�rrez Padilla Luis Pablo
fecha de creaci�n: 21/10/2020
Fecha de Modificaci�n:
Descripcion: Elaborar un programa que muestre el m�ximo y el m�nimo de una lista de n�meros positivos introducidos por teclado, sabiendo que un n�mero negativo termina el ciclo. El negativo no cuenta.
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
