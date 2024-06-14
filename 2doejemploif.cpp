/*
titulo programa: Segundo ejemplo de la estructura IF
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que determina el pago a un trabajador, de acuerdo a las horas trabajadas y a un precio por hora. El pago se determina de acuerdo a las siguientes condiciones:
			 1- Si trabaja entre 20 y 40 horas se paga normal
			 ( precio por hora trabajada)
			 2- Si trabaja más de 40 horas cada hora extra se le paga un 10% mas del precio por hora
			 3- Si trabaja menos de 20 horas se le descuenta el 5% de su paga.
*/

#include <iostream>

using namespace std;
main()
{
	int h,p,s; 
	cout << "Determinar si el empleado recibira bono extra por horas, recibira pago normal o si se le descontara una parte de la paga" <<endl<<endl;
	
	cout << "Ingresa el numero de horas trabajadas del empleado "; cin >> h;
	cout << "ingresa cuanto gana el empleado por hora "; cin >> p;
	if(h>40)
	 {
	 s=(p*h)*1.10;
	 cout <<"al trabajador le toca un 10% de bono por hora extra trabajada y el pago final es " << s;
	 }
	else
	  if(h>20)
	  {
		s=(p*h);
		cout <<"al trabajador le toca un pago normal de " << s;
	  }
	  else
	  {
	    s=(p*h)*.95;
		cout << "al trabajador se le descontara el 5% de su paga y el pago final es " << s;
      }
}
