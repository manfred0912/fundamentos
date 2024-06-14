/*titulo programa: 
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre el máximo y el mínimo de una lista de números positivos introducidos por teclado, sabiendo que un número negativo termina el ciclo. El negativo no cuenta.
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
