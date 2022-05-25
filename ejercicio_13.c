// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 13


#include <stdio.h>

int scan_int();

int main() 
{

	int vector[5];

	printf("Ingrese los valores del vector:\n");
	for(int i = 0; i < 5; i++)
	{
		vector[i] = scan_int();
	}

	for(int i = 0; i < 4; i++)
	{
		if(!(vector[i] < vector[i+1]))
			break;
		else if(i == 3)
		{
			printf("El vector es creciente\n");
			return 0;
		}
	}

	for(int i = 0; i < 4; i++)
	{
		if(!(vector[i] > vector[i+1]))
			break;
		else if(i == 3)
		{
			printf("El vector es decreciente\n");
			return 0;
		}
	}
	
	printf("El vector no es ni creciente ni decreciente\n");

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

