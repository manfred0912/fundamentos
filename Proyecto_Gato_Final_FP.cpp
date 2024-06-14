
/* 
nombre del Programa: Juego de Gato (3 en linea)
Autor : Canizales Fregoso César Eduardo 
Fecha de Creación: 18/11/2020
Fecha de modificación:
Descripcion:
*/
#include <iostream>	
#include <cstdlib>
#include <time.h>
using namespace std;
void loop(char c[3][3]);
void Intro_Primera(char c[3][3]);
void tablero(char c[3][3]);
int Intro_jugador(char c [3][3]);
void Inteligencia_pc(char c[3][3]);
int ganador(char c[3][3]);

int main()
{
	char c[3][3];
	loop(c);//Llamar todas las funciones fundamentales y limpiar la pantalla.
	system("pause");
	return 0;
}
void loop(char c [3][3])
{
	int i, j;
	i = 0;
	Intro_Primera(c);
	
	do
	{
		system("cls");
		tablero(c);
	

		if (i % 2 == 0)
		{
			Intro_jugador(c);
			
		}
		else
		{
			Inteligencia_pc(c);
				
		}
		j = ganador(c);
		i++;
	} while (i <= 9 && j == 2);
	system("cls");
	tablero(c);
	if (j == 0)
	{
		cout<<"Gana el Humano!!\n\n"<<endl;
	}
	else if (j == 1)
	{
		cout<<"Te gano la pc :C "<<endl;
	}
	else
	{
		cout<<"Es un empate!!"<<endl;
	}
}

void Intro_Primera(char c[3][3])
{// Aqui se crean los valores de la matriz 1 a 9
	int i, j;
	char aux;
	aux = '1';
	for (i =  0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = aux++;
		}
	}
}

int Intro_jugador(char c [3][3])
{
	int i, j, k;
	char aux;
		do
		{
			cout<<"Ingresa una ficha "<<endl;
			cin>>aux;
		} while (aux <= 1 && aux >= 9);
		k = 0;
		switch (aux)
		{
			case 1:
				{
					if(c[0][0] ='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[0][0] = 'X';
						k = c[0][0];
					} break;
				}
			case 2:
				{
					if(c[0][1]='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
					c[0][1] = 'X';	
						k = c[0][1];
					} break;
				}
			case 3:
			{
					if(c[0][2]='O'){
					cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[0][2] = 'X';
						k = c[0][2];
					} break;
				}
			case 4:
				{
					if(c[1][0]='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[1][0] = 'X';
						k = c[1][0];
					} break;
				}
			case 5:
				{
					if(c[1][1]!='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;	
					}
					else{
						c[1][1] = 'X';
						k = c[1][1];
					} break;
				}
			case 6:
				{
					if(c[1][2]!='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[1][2] = 'X';
						k = c[1][2];
					} break;
				}
			case 7:
				{
					if(c[2][0]!='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[2][0] = 'X';
						k = c[1][0];
					} break;
				}
			case 8:
			{
					if(c[2][1]!='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[2][1] = 'X';
						k = c[2][1];
					} break;
				}
			case 9:
			{
					if(c[2][2]!='O'){
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					else{
						c[2][2] = 'X';
						k = c[2][2];
					} break;
					}
	} 
	return(k);
}




void Inteligencia_pc(char c [3][3])
{//este bucle nos da los numeros de la pc comprendidos entre 0 y 2 para seleccionar su casilla 
	int i, j, k;
	srand(time(NULL)); //semila que da los aleatorios de la pc dentro del rango 
	do
	{
		i = rand() % 3;
		j = rand() % 3;
		k = 0;
		if (c[i][j] == 'X' || c[i][j] == 'O')
		{
			k = 1;
		}
	} while (k == 1);
	c[i][j] = 'O';
}

void tablero(char c [3][3])
{//aqui se crea el tablero 
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			Intro_jugador(c[3][3]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j < 3  && j != 0)//para que solo se impriman las 2 barras centrales 
			{
				cout<< " | " << c[i][j];
			}
			
			else {
				
				cout<< " "<< c[i][j];
			}
		
		}
		
		if (i !=2)
			cout<<"\n-----------\n";
		
	}
	cout<<"\n\n";
	
	cin.get();
}

int ganador(char c[3][3])
{
	if (c[0][0] == 'X' || c[0][0] == 'O')
	{
		if (c[0][0] == c[0][1] && c[0][0] == c[0][2])
		{
			if (c[0][0] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
		if (c[0][0] == c[1][0] && c[0][0] == c[2][0])
		{
			if (c[0][0] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
	}
	if (c[1][1] == 'X' || c[1][1] == 'O')
	{
		if (c[1][1] == c[0][0] && c[1][1] == c[2][2])
		{
			if (c[1][1] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
		if (c[1][1] == c[1][0] && c[1][1] == c[1][2])
		{
			if (c[1][1] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
		if (c[1][1] == c[2][0] && c[1][1] == c[0][2])
		{
			if (c[1][1] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
		if (c[1][1] == c[0][1] && c[1][1] == c[2][1])
		{
			if (c[1][1] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
	}
	if (c[2][2] == 'X' || c[2][2] == 'O')
	{
		if (c[2][2] == c[2][0] && c[2][2] == c[2][1])
		{
			if (c[2][2] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
		if (c[2][2] == c[0][2] && c[2][2] == c[1][2])
		{
			if (c[2][2] == 'X')
			{
				return 0; //EL Jugador ha ganado 
			}
			else
			{
				return 1; //La maquina Gana 
			}
		}
	}
	return 2;//Empate UwU
}


