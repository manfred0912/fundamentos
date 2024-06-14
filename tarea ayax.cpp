/*Hacer 1 programa con 4 funciones con paso de parámetros y el programa principal*/

#include<iostream>
#include <conio.h>

using namespace std;

double centimetro = 100.00, kilometro = 1000, pulgada = 39.97, pie = 3.281;

float convertir_metro_centimetro(float metro);

float convertir_metro_kilometro(float metro);

float convertir_metro_pulgada(float metro);

float convertir_metro_pie(float metro);

main(){
int opc, opc1, metro;
do{
cout<<"A que unidad de medida deseas convertir el metro?"<<endl;
	cout<<"\n1 Centimetro";
	cout<<"\n2 Kilometro";
	cout<<"\n3 Pulgada";
	cout<<"\n4 Pie\n";
	cin>>opc;
	cout<<"\nQue cantidad de metros deseas convertir? "<<endl;
  cin>>metro;
  
switch(opc){
case 1: cout<<metro<<" metros equivalen a "<<convertir_metro_centimetro(metro) <<" centimetros "; break;
case 2: cout<<metro<<" metros equivalen a "<<convertir_metro_kilometro(metro)<<" kilometros"; break;
case 3: cout<<metro<<" metros equivalen a "<<convertir_metro_pulgada(metro)<<" pulgadas ";break;
case 4: cout<<metro<<" metros equivalen a "<<convertir_metro_pie(metro)<<" pies "; break;
 default: cout<<"No se puede convertir a esa unidad de medida";
 } 
 cout<<"\nDeseas repetir el programa Si = 1 y No =2"<<endl;
cin>>opc1;
} while(opc1!=2);
}

float convertir_metro_centimetro(float metro){
	return (metro*centimetro);
}

float convertir_metro_kilometro(float metro){
	return (metro/kilometro);
}

float convertir_metro_pulgada(float metro){
	return (metro*pulgada);
}

float convertir_metro_pie(float metro){
	return (metro*pie);
}
