#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3;
	cout<<"digite el primer numero: ";cin>>n1;
	cout<<"digite el segundo numero: ";cin>>n2;
	cout<<"digite el tercer numero: ";cin>>n3;
if(n1==n2 && n2==n3){
cout<<"los numeros son iguales";
}
else if(n1>n2 && n1>n3){
	cout<<"el numero mayor es "<<n1;
	}
	else if (n2>n1 && n2>n3){
		cout<< "el numero mayor es "<<n2;
		}
		else if(n3>n1 && n3>n2){
			cout<<"el numero mayor es "<<n3;
		}	
return 0;
}
	
	
