// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 14


#include <stdio.h>

float scan_float();

int main() 
{

	float vector[8];

	printf("Ingrese los valores del vector:\n");
	for(int i = 0; i < 8; i++)
	{
		vector[i] = scan_float();
	}

	for(int i = 1; i < 8; i++)
	{
		if(vector[0] != vector[i])
		{
			printf("Los valores del vector son difrentes\n");
			return 0;
		}	
	}

	printf("Los valores del vector son iguales\n");

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

