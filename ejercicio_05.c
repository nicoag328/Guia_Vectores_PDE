// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 5

#include <stdio.h>

int scan_int();
float scan_float();

int main() 
{

	int edades[5];
	float sueldos[5];
	int mayor_edad = 0;
	int mayor_sueldo = 0;

	for(int i = 0; i < 5; i++)
	{
		printf("Persona %d:\n", i + 1);
		printf("Ingrese la edad: ");
		edades[i] = scan_int();
		printf("Ingrese el sueldo: ");
		sueldos[i] = scan_float();
	}

	printf("\nLista de personas:\n");
	printf("Persona\tEdad\tSueldo\n");

	for(int i = 0; i < 5; i++)
	{
		printf("%d\t%d\t%f\n", i+1, edades[i], sueldos[i]);
	}

	for(int i = 0; i < 5; i++)
	{
		if (edades[i] >= edades[mayor_edad])
		{
			mayor_edad = i;
		} 
	}

	printf("\nLa persona %d tiene la mayor edad (posicion %d del vector)", mayor_edad + 1, mayor_edad);

	for(int i = 0; i < 5; i++)
	{
		if (sueldos[i] >= sueldos[mayor_sueldo])
		{
			mayor_sueldo = i;
		} 
	}

	printf("\nLa persona %d tiene el mayor sueldo (posicion %d del vector)", mayor_sueldo + 1, mayor_sueldo);

	if(mayor_edad == mayor_sueldo)
		printf("\nLa persona de mayor edad tambien tiene el mayor sueldo");

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
