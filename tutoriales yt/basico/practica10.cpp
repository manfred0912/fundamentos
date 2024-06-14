#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c, resul1 = 0, resul2 = 0;
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	cout<<"digite el valor de c: "; cin>>c;
	
	resul1 = (-b+(sqrt(pow(b,2))-(4 * a * c)))/(2 * a); 
	resul2 = (-b-(sqrt(pow(b,2))-(4 * a * c)))/(2 * a); 
	cout<<"\nEls resultado positivo de este trinomio es: "<<resul1<<endl;
	cout<<"El resultado negativo es: "<<resul2<<endl;
	
	
	return 0;
}
