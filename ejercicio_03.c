// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 3


#include <stdio.h>

float scan_float();

int main() 
{

	float vector[5];

	for(int i = 0; i < 5; i++)
	{
		printf("Ingrese el valor %d: ", i + 1);
		vector[i] = scan_float();
	}

	printf("\nVector :\n");

	for(int i = 0; i < 5; i++)
	{
		printf("%f ", vector[i]);
	}

	printf("\n\nVector multiplicado por 1.65:\n");

	for(int i = 0; i < 5; i++)
	{
		vector[i] *= 1.65;
		printf("%f ", vector[i]);
	}


	printf("\n");

	return 0;
}

float scan_float()
{
	float value;
	char buf[20] = {0};
	int error_code;

	do {
		fgets(buf, 20, stdin);		
		error_code = sscanf(buf, "%f", &value);

		if (error_code != 1)	
			printf("Ingrese un numero flotante\n");

	} while (error_code != 1);

	return value;
}

