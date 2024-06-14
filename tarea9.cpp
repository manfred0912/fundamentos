/* 
nombre del Programa: Arreglo bidimensional  
Autor : Gutiérrez Padilla Luis Pablo
Fecha de Creación: 12/11/2020
Fecha de modificación
Descripcion:laborar un programa que almacene los elementos de una matriz mXn (máximo 10x10) e imprimir :
a) Suma de los elementos.
b) Promedio de los elementos.
c) Elemento que más se repite (moda).
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
main()
{
	srand(time(NULL)); 
	float numeros[10][10],suma,promedio,moda,filas,columnas,temp;
	cout<<"Ingrese el numero de filas de la matriz, maximo 10: ";cin>>filas;
	cout<<"\nIngrese el numero de columnas de la matriz, maximo 10: ";cin>>columnas;
	
	
	for (int f=0;f<filas;f++)
	  for (int c=0;c<columnas;c++){
		numeros[f][c]=(rand()%100);
		promedio+=numeros[f][c];
	  }
		for (int f=0;f<filas;f++){
	  cout << f+1<< " "<<endl;
	  	for (int c=0;c<columnas;c++){
	 	  cout << f+1 << " " <<numeros[f][c] << "\t";
	 	  }
    }
	for (int f=0;f<filas;f++)
	  for (int c=0;c<columnas;c++){
	  moda = numeros[1][1];
	  temp = numeros[f][c];
	  
		}
    cout << endl<<endl;
    cout << "La suma de los elementos es: " <<promedio<<endl;
	promedio/=100;  
	cout << "El promedio de los elementos es: " <<promedio<<endl;
	cout << "La moda de los elementos es: " <<moda<<endl;
	
}
