/*titulo programa: 
Autor: Guti�rrez Padilla Luis Pablo
fecha de creaci�n: 21/10/2020
Fecha de Modificaci�n:
Descripcion: Elaborar un programa que muestre el m�ximo y el m�nimo de una lista de n�meros positivos introducidos por teclado, sabiendo que un n�mero negativo termina el ciclo. El negativo no cuenta.
*/
#include <iostream>
using namespace std;

main (){
	  float cant, precio, total;
		cout << "Ingresa la cantidad vendida del producto" <<endl;
		cin >> cant;
		cout<<"Ingresa el precio"<<endl;
		cin>>precio;
		
		total = cant*precio;
		
		cout<<"el total de la compra es "<<total<<endl;
}
