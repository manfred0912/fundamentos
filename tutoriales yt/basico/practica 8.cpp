#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float cateto1, cateto2, hipotenusa, aux;
	cout<<"Digite el primer cateto: "; cin>>cateto1;
	cout<<"digite el segundo cateto: "; cin>>cateto2;
	
	cateto1 = pow(cateto1,2);
	cateto2 = pow(cateto2,2);
	aux = cateto1 + cateto2;
	hipotenusa = sqrt(aux);
	cout<<"\nLa hipotenusa de este triangulo es: "<<hipotenusa<<endl;
	
	return 0;
}
