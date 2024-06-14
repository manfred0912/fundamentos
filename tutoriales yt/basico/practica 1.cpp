#include <iostream>

using namespace std;

int main (){
	float IVA = 1.16, resultado, precio;
	cout<<"Por favor ingrese el precio del producto: "; cin>>precio;
	resultado = precio*IVA;
	cout<< "\nEl precio con IVA incluido es de: "<<resultado;
 	return 0;
}
