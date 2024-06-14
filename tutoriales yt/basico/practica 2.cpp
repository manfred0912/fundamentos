#include <iostream>

using namespace std;

int main(){
	float a, b, c, d, resultado = 0;
	cout<<"Porfavor ingrese el valor de a: "; cin>>a;
	cout<<"Porfavor ingrese el valor de b: "; cin>>b;
	cout<<"Porfavor ingrese el valor de c: "; cin>>c;
	cout<<"Porfavor ingrese el valor de d: "; cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado es "<<resultado<<endl;
	
	
	return 0;
}
