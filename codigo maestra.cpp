#include<iostream>
#include<conio.h>

using namespace std;

float n1,n2;

void datos()

{

cout <<"dame el 1er. No."; cin>>n1;

cout <<"dame el 2do. No."; cin>>n2;

}

float suma()

{

float r;

datos(); r=n1+n2;

return(r);

}

void resta()

{

float r; datos();

r=n1-n2; cout<<"Resta = "<<r<<endl;

}

float multi()

{

float r;

datos(); r=n1*n2;

return(r);

}

void divi()

{

float r;

datos(); r=n1/n2;

cout<<"División= "<<r;

}

main()

{

int op;

do

{cout<<"operaciones básicas\n1) suma\n2)resta\n3)multiplicacion\n4)division\n5)salir\n";

cout <<"dame tu opción:"; cin>>op;

switch(op)

{

case 1:cout<<"suma = ",suma(); break;

case 2:resta(); break;

case 3:cout<<"multiplicacion = "<<multi(); break;

case 4:divi(); break;

}getch(); }while(op!=5);

}
