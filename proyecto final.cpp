/* 
nombre del Programa: Proyecto final
Autor : Gutierrez Padilla Luis Pablo 
Fecha de Creación: 01/12/2020
Fecha de modificación: 01/12/2020
Descripcion: simulación de cajero automatico
*/

#include<iostream>
#include<conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
 
float saldo = 1000; 

float op1();

void op2();

void op3();

void op4();

void op5();

float retiroSaldo(float num);

int depositoSaldo(int num);

float pagoMensual(int funcion[18][2]);

main(){
int op;
do{
	cout<<"Bienvenido a su cajero automatico, enseguida le mostraremos las utiles herramientas que este cajero es capaz de hacer, por favor escoja una opcion."<<endl;
	cout<<"Opcion 1: consulta de saldo"<<endl;
	cout<<"Opcion 2: retiro de efectivo"<<endl;
	cout<<"Opcion 3: deposito de efectivo"<<endl;
	cout<<"Opcion 4: ultimos movimientos"<<endl;
	cout<<"opcion 5: cotizaciones de creditos"<<endl;
	cout<<"opcion 6: salir"<<endl;
	cin>>op;
	
	switch (op){
		case 1: cout<<"Su saldo actual es de "<<op1()<<" pesos, porfavor presione enter"; break;
		case 2: op2(); break;
		case 3: op3(); break;
		case 4: op4(); break;
		case 5: op5(); break;
		case 6: cout<<"Gracias por usar este cajero, que tenga un buen dia"; break;
		default: cout<<"Porfavor ingrese un numero valido, presione enter para continuar"; break;
	}cout<<endl;
	getch(); }while(op!=6);
}

float op1(){
	return (saldo);
}

void op2(){
	float retiro;
	cout<<"Porfavor digite la cantidad de dinero que desea retirar."<<endl;
	cin>>retiro;
	if(retiro>saldo){
		cout<<"Usted no cuenta con saldo suficiente para realizar este retiro, porfavor digite una cantidad que este dentro de su saldo.";
	}
	else{
		cout<<"Su operación se ha completado con exito, ya puede tomar su dinero, su saldo actual es: "<<retiroSaldo(retiro)<<" pesos."<<endl;
		cout<<"Porfavor presione enter"<<endl;
	}
}


void op3(){
	int s;
	cout<<"Porfavor digite la cantidad a depositar, tiene que ser multiplo de 100"<<endl;
	cin>>s;
	cout<<"Porfavor ingrese la cantidad de efectivo que selecciono, seguido presione enter"<<endl;
	getch();
	cout<<"La cantidad de "<<s<<" pesos ha sido abonada a su cuenta, su nuevo saldo es: "<<depositoSaldo(s)<<endl;
	cout<<"Porfavor presione enter"<<endl;
}

void op4(){
	srand(time(NULL));
	float movimientos[10];
	int pares, n;
	cout<<"Porfavor digite la cantidad de movimientos que desea checar, maximo 10"<<endl;
	cin>>n;
	for (int f=0;f<n;f++){
		movimientos[f]=(rand()%100);
		pares += 1;
		if(pares%2==0){
			cout<<"Se realizo un retiro de "<<movimientos[f]<<" pesos."<<endl;
		}
		else{
			cout<<"Se realizo un deposito de "<<movimientos[f]<<" pesos."<<endl;
		}
	}
	cout<<"Porfavor presione enter para continuar."<<endl;
}

void op5(){
	float creditos[18][2], interes, meses, credito, pago, mensual, cantidadFinal;
	if(meses<=18){
	cout<<"Porfavor ingrese la cantidad de meses a los que quiere cotizar un credito. maximo 18"<<endl;
	cin>>meses;
	cout<<"Porfavor ingrese la cantidad de dinero por la que desea obtener un credito"<<endl;
	cin>>credito;
	}
	else{
		cout<<"Los creditos no pueden ser pagados en un rango mayor a 18 meses"<<endl;
	}
	if(meses<0 & meses>=4){
		interes = 1.2;
	}
	else if(meses>4 & meses<=8){
	interes = 1.4;
  }
  else if(meses>8 & meses<=12){
  	interes = 1.6;
	}
	else if(meses>12 & meses<=16){
		interes = 1.8;
	}
	else if(meses>16){
	interes = 2;
	}

pago = (credito / meses) * interes;
mensual = pago;
cantidadFinal = credito * interes;
cout<<"en este caso el interes del credito seria de "<<interes<<", por lo tanto la cantidad final a pagar seria de "<<cantidadFinal<<" pesos, y estarias pagando "<<pago<<" pesos al mes, la siguiente tabla muestra la cantidad de dinero que llevarias pagada en cada uno de los meses en los que se solicito el credito"<<endl;
cout<<"\nmeses / cantidad pagada conforme van pasando los meses"<<endl;
for (int f=1;f<meses;f++){
			creditos[f][0]+=1;
			creditos[0][1]=pago;
			creditos[f][1]= mensual += pago;
			
	}
	  for (int f=0;f<meses;f++){
	  cout<< " "<<endl;
	  	for (int c=1;c<2;c++){
	  	cout << f+1 << "       " <<creditos[f][c];
	}
	}
	cout<<"\n\nPara mas informacion porfavor pase con uno de los ejecutivos, presione enter para continuar"<<endl;
}

float retiroSaldo(float num){
	saldo -= num;
	return(saldo);
}

int depositoSaldo (int num){
	saldo += num;
	return(saldo);
}








