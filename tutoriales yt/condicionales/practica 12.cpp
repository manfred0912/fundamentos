#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opc,cubo,numero;
	cout<<"opcion 1: sacar el cubo de un numero"<<endl;
	cout<<"opcion 2: definir si un numero es par o impar"<<endl;
	cout<<"opcion 3: salir"<<endl;
	cout<<"por favor digite el numero de la opcion que desea usar: ";cin>>opc;
	
	switch(opc){
		case 1: cout<<"ingrese el numero a elevar al cubo: ";cin>>cubo;
		cubo = pow(cubo,3);
		cout<<"el resultado es: "<<cubo;
		break;
		case 2: cout<<"ingrese el numero a evaluar si es par o impar: ";cin>>numero;
		if(numero%2==0){
		cout<<"el numero es par";
	  }
		else{
			cout<<"el numero es impar";
		}
		break;
		case 3: break;
	return 0;
	}
}
