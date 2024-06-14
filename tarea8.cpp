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
	float numeros[25],n,mayor=0,menor=10000000,pares=0,par,media;
	cout<<"digite el numero de elementos del arreglo: ";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";cin>>numeros[i];
		if(numeros[i]%2==0){
			pares += 1;
			par += numeros[i];
			media = par / pares;
		}
		else if(numeros[i] > mayor){
			mayor = numeros[i];
		}
		else if(numeros[i] < menor){
			menor = numeros[i];
			}
		}
		cout<<"\nel numero mayor del arreglo es: "<<mayor<<", el menor es: "<<menor<<" y la media de los numeros pares es: "<<media;
	}
