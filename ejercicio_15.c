// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 15


#include <stdio.h>

int scan_int();

int main() 
{

	int vector[10];
	int vector_resultado[10];
	int posicion_maxima = 0;


	printf("Ingrese los valores del vector:\n");
	for(int i = 0; i < 10; i++)
	{
		vector[i] = scan_int();
	}

	vector_resultado[0] = vector[0];

	for(int i = 1; i < 10; i++)
	{
		for (int j = 0; j <= posicion_maxima; j++)
		{
			if(vector[i] == vector_resultado[j])
				break;
			else if (j == posicion_maxima)
			{
				posicion_maxima++;
				vector_resultado[posicion_maxima] = vector[i];
			}
		}
		
	}

	printf("\nVector resultado:\n");
	for(int i = 0; i <= posicion_maxima; i++)
	{
		printf("%d ", vector_resultado[i]);
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

