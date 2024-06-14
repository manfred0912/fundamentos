/* titulo programa: Estructuras repetitivas
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 28/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa para obtener la suma de 100 numeros positivos.
contadores variableContador ++ incremento de 1 en 1 -- decremento de 1 en 1
					 veriableContador +=10 o -=5
					 pseint pseudocodigo contador = contador +1 (++), contador = contados +10 (+=10)
					 acumulador operadorAritmetico = variable o expresion
					 acumulador+=n acumulador*=n acumulador -= n*10/5
					 pseint pseudocodigo
					 acumulador=acumulador+n
					 acumulador=acumulador*n
					 acumulador=acumulador - n*10/5 
*/
#include <iostream>

using namespace std;

main() 
{
	int suma=0,contador=1;
	cout << "Ejemplo de estructuras repetitivas while, do while y for" <<endl<<endl;
	cout << "Estructura while"<< endl;
	while(contador<=100)  //<101
	{
		suma+=contador;
		//inicializar max y min con el primer valor ingresado
		if(contador==1)
		{
			max=contador;
			min=contador;
		}
		else
			if(contador<min)
			  min=contador;
		  else
		  	if(contador>max)
		      max=contador;
		contador++;
	}
	cout << "La suma de los primeros 100 numeros con while es "<< suma<< endl<<endl;
	cout << "Promedio: "<< suma/100<< endl;
	cout << "Valor Maximo: "<< max<< endl;
	cout << "Valor Minimo: "<< min<< endl;
	cout << "Estructura Do While"<< endl;
	suma=0; contador=1;
	do
	{
		suma+=contador;
		contador++;
	}while(contador<=100);
	cout <<"La sima de los primeros 100 numeros con do while es "<< suma<< endl<<endl;
	cout << "Estructura For"<< endl;
	suma=0;
	for(contador=1;contador<=100;contador++)
		suma+=contador;
	cout << "La suma de los primeros 100 numeros con For es "<< suma<< endl<<endl;
	
}
