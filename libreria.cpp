/* 
nombre del Programa: tarea 11: Funciones 
Autor : Gutiérrez Padilla Luis Pablo
Fecha de Creación: 23/11/2020
Fecha de modificación
Descripcion: Ejemplos de funciones en c++
*/
#include <iostream> 
using namespace std;

int L1;

float perimetroR(int x, int y);

int perimetroC(){
	int p;
	p = L1 * 4;
	return p;
}

void areaR(){
	int b, a, area;
	cout<<"ingrese la base y la altura del rectangulo separadas por un espacio: ";cin>>b>>a;
	area = b * a;
	cout<<"el area del rectangulo es: "<<area<<endl;
	cout<<"y el perimetro del rectangulo es: "<< perimetroR(b, a)<<endl;
}

main(){
	cout<<"Este programa tiene como proposito sacar el area y el perimetro de diferentes formas geometricas"<<endl;
	cout<<"ingrese la medida de uno de los lados del cuadrado: ";cin>>L1;
	cout<<"el perimetro del cuadrado es: "<<perimetroC()<<endl;
	areaR();
}

float perimetroR(int x, int y){
	float perimetroRec;
	perimetroRec=x+x+y+y;
	return(perimetroRec);
}
