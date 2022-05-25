// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 1


#include <stdio.h>

int scan_int();

int main() 
{

	int vector[5];

	for(int i = 0; i < 5; i++)
	{
		printf("Ingrese el valor %d: ", i + 1);
		vector[i] = scan_int();
	}

	printf("\nVector impreso al derecho:\n");

	for(int i = 0; i < 5; i++)
	{
		printf("%d ", vector[i]);
	}

	printf("\n\nVector impreso al reves:\n");

	for(int i = 4; i >= 0; i--)
	{
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

		if (error_code != 1)	
			printf("Ingrese un numero entero\n");

	} while (error_code != 1);

	return value;
}

