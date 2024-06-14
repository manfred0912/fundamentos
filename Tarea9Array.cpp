/* 
nombre del Programa: Arreglo bidimensional  
Autor : Canizales Fregoso César Eduardo 
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
	float elem[5][5],suma,prom,moda,d1,d;
	cout << "Suma, promedio y moda" <<endl<<endl;
	
	
	for (int f=0;f<5;f++)
	  for (int c=0;c<5;c++)
	{
		
		elem[f][c]=(rand()%100);

	}
	for (int f=0;f<5;f++)
	  for (int c=0;c<5;c++)
	{
	  prom+=elem[f][c];	
	}

	  
    
    for (int f=0;f<5;f++)
	{
	  cout << f+1<< " "<<endl;
	  for (int c=0;c<5;c++)
	  {
	  	
		 cout << f+1 << " " <<elem[f][c] << "\t";
	  }
    }
    cout << endl<<endl;
    cout << "Suma, promedio y moda" <<endl<<endl;
    cout << "suma: " <<prom<<endl;
	prom=prom/25;  
	cout << "promedio: " <<prom<<endl;
	cout << "moda: " <<moda<<endl;
	
}
