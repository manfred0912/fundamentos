/* 
nombre del Programa: ejemplos para la investigacion de algoritmos de ordenamiento y busqueda   
Autor : Gutiérrez Padilla Luis Pablo
Fecha de Creación: 20/11/2020
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
main(){
	srand(time(NULL)); 
	int lista[10],n,aux,busq,izq=15,medio,der=n,dato;
	char band ='F';
	cout<<"Ingrese el numero de numeros para la lista, maximo 10: ";cin>>n;

	for (int f=0; f<n; f++){
	  lista[f]=(rand()%100);
		}
	for (int f=0;f<n;f++)
		for(int j=f+1;j<n;j++){
      if (lista[j]<lista[f]){
      aux=lista[f];
      lista[f]=lista[j];
      lista[j]=aux;}
    }
	
	cout<<"Elementos ordenados: "<<endl;
	for(int f=0;f<n;f++)
	cout<<lista[f]<<endl;
	
	cout<<"Porfavor introduzca un valor a buscar en el programa: ";cin>>dato;
	
	while(der<=izq){
		medio=(izq+der)/2;
		if(lista[medio]==dato){
			band='V';
			break; 
		}
		if(lista[medio]>dato){
			der=medio;
			medio=(izq+der)/2;
		}
		if(lista[medio] < dato){
			izq=medio;
			medio=(izq+der)/2;
		}
	}
	
	if(band=='V'){
	cout<<"El valor se encuentra en la posicion: "<<medio<<endl;	
	}
} 
