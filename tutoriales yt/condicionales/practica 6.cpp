#include<iostream>

using namespace std;

int main(){
	char letra;
	cout<<"digite un caracter: "; cin>>letra;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula";break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"es una vocal mayuscula";break;
		default: cout<<"el caracter ingresado no es una vocal";
	}
	return 0;
}
