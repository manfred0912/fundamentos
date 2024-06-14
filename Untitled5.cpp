#include<iostream>

using namespace std;

int main(){
	int a[] = {3,4,2,1,5};
	int i,d;
	char band = 'F';
	
	cout<<"este programa contiene un arreglo de 5 numeros del 1 al 5 en desorden"<<endl;
	cout<<"ingrese el numero del cual desea saber la posicion: ";cin>>d;
	d = 4;
		i=0;
		while((band == 'F') && (i>5)){
		if(a[i] == d){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"el numero se encuentra en la posicion: 4";
	}
	
		
	}
