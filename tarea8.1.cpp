/*
titulo programa: tarea 8
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que almacene en un vector n elementos de tipo real (máximo 25) e imprima los siguientes valores:
a) Máximo.
b) Mínimo.
c) La media de los que estén en posiciones pares.
*/
#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main(){
	srand(time(NULL));
	float numeros[25],n,mayor=0,menor=10000000,sumaPares,media;
	int pares=0;
	cout<<"digite el numero de elementos del arreglo: ";cin>>n;
	
	for(int f=0;f<n;f++){
	numeros[f]=(rand()%100+1)+(rand()%100+1)*.1;
	pares += 1;
		if(pares%2==0){
			sumaPares += numeros[f];
			media +=1;
		}
			else if(numeros[f]>mayor){
			mayor = numeros[f];
	  	}
	  		else if(numeros[f]<menor){
	  			menor = numeros[f];
				}
	}
	cout<<"Numeros"<<endl;
	for(int f=0;f<n;f++){
		cout<<f+1<<" "<<numeros[f]<<endl;
	}
	media = sumaPares / media;
	cout<<"\nEl numero mayor es: "<<mayor<<", el menor es: "<<menor<<", y la media de los numeros que estan en posiciones pares es: "<<media<<endl;
}
