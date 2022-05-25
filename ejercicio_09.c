// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 9

#include <stdio.h>

int scan_int();

int main() 
{

	int equipoA[5];
	int equipoB[5];
	int empates = 0;
	int ganadosA = 0;
	int ganadosB = 0;

	for(int i = 0; i < 5; i++)
	{
		printf("Partido %d:\n", i + 1);
		printf("Ingrese los goles del equipo A: ");
		equipoA[i] = scan_int();
		printf("Ingrese los goles del equipo B: ");
		equipoB[i] = scan_int();
	}

	for(int i = 0; i < 5; i++)
	{
		if (equipoA[i] > equipoB[i])
			ganadosA++;
		else if (equipoB[i] > equipoA[i])
			ganadosB++;
		else
			empates++;
	}
	
	printf("\nOcurrieron %d empates", empates);

	if (ganadosA > ganadosB)
		printf("\nEl ganador final es el equipo A");
	else if (ganadosB > ganadosA)
		printf("\nEl ganador final es el equibo B");
	else
		printf("\nLos equipos empataron");

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

