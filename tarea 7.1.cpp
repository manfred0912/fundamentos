/*titulo programa: imprimir edad
Autor: Gutiérrez Padilla Luis Pablo
fecha de creación: 21/10/2020
Fecha de Modificación:
Descripcion: Elaborar un programa que muestre la edad actual del usuario despues de ingresar su fecha de nacimiento y la fecha actual
*/
#include <iostream>
using namespace std;
 
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);
 
int main ()
{
    int anioAct;  
    int mesAct; 
    int fechAct; 
 
    int anioNac; 
    int mesNac; 
    int fechNac; 
 
    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> fechAct;
 
    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;
 
    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
 
    return 0;
}
 
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;
 
    if ( fechAct < fechNac  )
    {   
        fechAct = fechAct + 30; 
        mesAct = mesAct - 1; 
        respFech =  fechAct - fechNac; 
    }
    else 
        respFech =  fechAct - fechNac;  
 
    if( mesAct < mesNac )
    {   
        mesAct = mesAct + 12; 
        anioAct = anioAct - 1 ; 
        respMes = mesAct - mesNac; 
    }
    else 
        respMes = mesAct - mesNac; 
 
    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl; //Muestra edad
    cout << " Mes: " << respMes << endl; //Muestra mes
    cout << " Dia: " << respFech << endl; //Muestra dia
	
	
}
