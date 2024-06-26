/* 
nombre del Programa: Juego de Gato (3 en linea)
Autor : Canizales Fregoso C�sar Eduardo 
Fecha de Creaci�n: 18/11/2020
Fecha de modificaci�n:
Descripcion:
*/
#include<iostream>	
#include<time.h>
#include<cstdlib>

using namespace std;

void loop(char c[3][3]);
void Intro_Primera(char c[3][3]);
void tablero(char c[3][3]);
void Intro_jugador(char c [3][3]);
void Inteligencia_pc(char c[3][3]);
int ganador(char c[3][3]);

int f=0, c=0;

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
	aux = 1;
	for (i - 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = aux++;
		}
	}
}

void Intro_jugador(char c [f][c])
{
	int i, j, k,f,c;
	char aux;
	do
	{
		do
		{
			cout<<"Ingresa una ficha "<<endl;
			fflush(stdin);
			cin>>f;
			f=3;
			c=f;
		} while (aux < '1' || aux > '9');
		k = 0;
		switch (aux)
		{
			case 1:
				{
					i = 0;
					j = 0;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 2:
				{
					i = 0;
					j = 1;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 3:
				{
					i = 0;
					j = 2;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 4:
				{
					i = 1;
					j = 0;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 5:
				{
					i = 1;
					j = 1;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 6:
				{
					i = 1;
					j = 2;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 7:
				{
					i = 2;
					j = 0;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 8:
				{
					i = 2;
					j = 1;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
			case 9:
				{
					i = 2;
					j = 2;
					if (c[i][j] == 'X' || c[i][j] == 'O')
					{
						k = 1;
						cout<<"la casilla esta ocupada crack, intenta de nuevo\n\n"<<endl;
					}
					break;
				}
		}
	} while (k == 1);
	c[i][j] = 'X';
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
	for (i - 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j < 2)//para que solo se impriman las 2 barras centrales 
			{
				cout<<" %c |", c[i][j];
			}
			else
			{
				cout<<" %c ", c[i][j];
			}
		}
		if (j < 2)//para que solo imprima la barras horizontales (centrales)
		{
			cout<<"\n-----------\n";
		}
	}
	cout<<"\n\n";
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


