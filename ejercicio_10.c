// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 10

#include <stdio.h>

int scan_int();

int main() 
{

	int lista_1[8];
	int lista_2[8];

	printf("Ingrese los DNI de la primera lista: \n");
	for(int i = 0; i < 8; i++)
	{
		lista_1[i] = scan_int();
	}

	printf("\nIngrese los DNI de la segunda lista: \n");
	for(int i = 7; i >= 0; i--)
	{
		lista_2[i] = scan_int();
	}

	printf("\nLas parejas son:\n");
	for(int i = 0; i < 8; i++)
	{
		printf("%d\t\tcon\t\t%d\n", lista_1[i], lista_2[i]);
	}
	
	printf("\n");

	return 0;
}

int scan_int()
{
	int value;
	char buf[20] = {0};
	int error_code;

	do {
		fgets(buf, 20, stdin);		
		error_code = sscanf(buf, "%d", &value);

		if (error_code != 1)	
			printf("Ingrese un numero entero\n");

	} while (error_code != 1);

	return value;
}

