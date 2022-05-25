// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 2

#include <stdio.h>

int scan_int();

int main() 
{

	int vector[4];

	vector[0] = 100;
	vector[1] = 200;
	vector[2] = 300;
	vector[3] = 400;

	printf("Vector:\n");

	for(int i = 0; i < 4; i++)
	{
		printf("%d ", vector[i]);
	}

	printf("\n");

	return 0;
}
