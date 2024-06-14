/* 
nombre del Programa: Funciones 
Autor : Gutierrez Padilla Luis Pablo 
Fecha de Creación: 25/11/2020
Fecha de modificación
Descripcion:Ejemplos de funciones en c++
*/
#include <iostream> 
using namespace std;
//decl.sin prot.
void PruebaEstrellas()
{
  cout << "********************" <<endl;
}

float triple(float num)
{
	return 3*num;
}


string  diaSem(int d=1);
float iva(float cant, float *total);

main()
{
	float c,t;
	cout<<"ejemplo de funciones"<<endl<<endl;
	/* PruebaEstrellas();
	cout<<"el cubo de 3 es: "<<triple(3)<<endl;
	PruebaEstrellas();
	cout<<endl<< diaSem(3); */
	cout<<"Ingresa una cantidad: ";cin>>c;
	cout<<"\nEl iva de la cantidad "<< c << " es "<< iva(c, &t) << " en total es "<< t<<endl;
}
string diaSem(int d)
{

	string dia;
	switch(d)
	{
	case 1: dia="lunes"; break;
	case 2: dia="Martes"; break;
	case 3: dia="Miercoles"; break;
	case 4: dia="Jueves"; break;
	case 5: dia="Viernes"; break;
	case 6: dia="Sabado"; break;
	case 7: dia="Domingo"; break;
	default: dia="Error"; break;
	}
}

float iva(float cant, float *total){
		*total=cant*1.16;
		return cant*.16;
	}
