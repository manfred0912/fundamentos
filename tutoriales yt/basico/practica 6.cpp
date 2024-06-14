#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, media = 0, alumnos = 4;
	cout<<"Ingrese la calificacion del primer alumno: "; cin>>a;
	cout<<"Ingrese la calificacion del segundo alumno: "; cin>>b;
	cout<<"Ingrese la calificacion del tercer alumno: "; cin>>c;
	cout<<"Ingrese la calificacion del cuarto alumno: "; cin>>d;
	media= (a+b+c+d)/alumnos;
	cout<<"\nLa media de calificaciones es: "<<media<<endl;
	
	return 0;
}
