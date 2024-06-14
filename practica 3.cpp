/*
titulo programa: curso de la estructura IF
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa para solicitar las medidas de los 3 lados de un triangulo y mostrar en pantalla si es equilatero (3 lados iguales), isoceles (dos lados iguales) o escaleno (todos los lados son diferentes).
*/

#include <iostream>

using namespace std;
main()
{
	int l1,l2,l3; //l=lado
	
	cout << "Determinar el tipo de triangulo" << endl<<endl;
	
	/*cout << "Ingresa el valor para cada uno de los lados del triangulo ";
	 cin >> l1,l2,l3;*/
	cout << "Ingresar el valor del lado 1: "; cin >> l1;
	cout << "Ingresar el valor del lado 2: "; cin >> l2;
	cout << "Ingresar el valor del lado 3: "; cin >> l3;
	if(l1==l2 && l2==l3)
	{
		cout << "es un triangulo equilatero" << endl;
	}
	else
    	if(l1==13 || l1==l2 || l2==l3) 
		 cout << "es un triangulo isoceles" << endl;
		else
		 cout << "Es un triangulo escaleno" <<endl;
		 
}
