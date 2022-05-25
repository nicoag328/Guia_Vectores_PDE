// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 11


#include <stdio.h>

int scan_int();

int main() 
{

	int vector_A[3];
	int vector_B[10];
	int encontrado = 0;

	printf("Ingrese los valores del vector A: \n");
	for(int i = 0; i < 3; i++)
	{
		vector_A[i] = scan_int();
	}

	printf("Ingrese los valores del vector B: \n");
	for(int i = 0; i < 10; i++)
	{
		vector_B[i] = scan_int();
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if (vector_A[i] == vector_B[j])
			{
				encontrado++;
				break;
			}
			else if (j == 9)
				goto verificar;
		}
	}

	verificar:

	if (encontrado == 3)
		printf("\nTodos los elementos del vector A se encuentran al menos una vez en el vector B");
	else
		printf("\nNo se encuentran todos los elementos del vector A en el vector B");

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

