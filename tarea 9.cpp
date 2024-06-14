/*
titulo programa: tarea 9
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que almacene los elementos de una matriz mXn (máximo 10x10) e imprimir :
a) Suma de los elementos.
b) Promedio de los elementos.
c) Elemento que más se repite (moda).
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
	int numeros[10][10],filas,columnas,suma,prom,moda,cale;
	srand(time(NULL));
	cout<<"digite el numero de filas: ";cin>>filas;
	cout<<"digite el numero de columnas: ";cin>>columnas;
	
	cout<<"\nLa matriz es: "<<endl;
		for (int i=0;i<filas;i++){
		 for(int j=0;j<columnas;j++){
		 	cout<<numeros[i][j];
		 }
		 cout<<endl;
	  }
	
	for (int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\ndigite un numero ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
			cale = numeros[i][j];
			suma += cale;
			moda += 1;
			prom = suma / moda;
				}
		}
	

 	
 	cout<<"\nLa suma de los elementos es: "<<suma<<" y el promedio es: "<<prom;



}

