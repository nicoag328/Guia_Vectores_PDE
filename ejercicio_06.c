// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 6

#include <stdio.h>
#define NOTA_DE_APROBACION 6


int scan_int();
float scan_float();

int main() 
{

	int dni[10];
	float calificacion[10];

	for(int i = 0; i < 10; i++)
	{
		printf("Estudiante %d:\n", i + 1);
		printf("Ingrese el DNI: ");
		dni[i] = scan_int();
		printf("Ingrese la calificacion: ");
		calificacion[i] = scan_float();
	}

	printf("\nEstudiantes que aprobaron: ");

	for(int i = 0; i < 10; i++)
	{
		if (calificacion[i] >= NOTA_DE_APROBACION)
		{
			printf("\n%d", dni[i]);;
		} 
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
