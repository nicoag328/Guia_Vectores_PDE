// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 4


#include <stdio.h>

int scan_int();

int main() 
{

	int vector[10];

	for(int i = 0; i < 10; i++)
	{
		printf("Ingrese el valor %d: ", i + 1);
		vector[i] = scan_int();
	}

	printf("\nVector con pares en 0:\n");

	for(int i = 0; i < 10; i++)
	{
		if(vector[i] % 2 == 0)
			vector[i] = 0;

		printf("%d ", vector[i]);
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

		if (error_code != 1 || value <= 0)	
			printf("Ingrese un numero entero positivo\n");

	} while (error_code != 1 || value <= 0);

	return value;
}

