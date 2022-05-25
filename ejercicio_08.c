// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 8

#include <stdio.h>

int scan_int();

int main() 
{

	int vector[10];

	for(int i = 0; i < 10; i+=2)
	{
		vector[i]   = 1;
		vector[i+1] = 0;
	}

	printf("Vector:\n");

	for(int i = 0; i < 10; i++)
	{
		printf("%d ", vector[i]);
	}

	printf("\n");

	return 0;
}
