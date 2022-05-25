// Guia Vectores Programacion de Dispositivos
// Nicolas Gestro
// Ejercicio 7

#include <stdio.h>

float scan_float();

int main() 
{

	float precio[5];
	float freq[5];
	int mayor_precio = 0;
	int mayor_freq = 0;

	for(int i = 0; i < 5; i++)
	{
		printf("Microprocesador %d:\n", i + 1);
		printf("Ingrese el precio: ");
		precio[i] = scan_float();
		printf("Ingrese la frecuencia: ");
		freq[i] = scan_float();
	}

	for(int i = 0; i < 5; i++)
	{
		if (precio[i] >= precio[mayor_precio])
		{
			mayor_precio = i;
		} 
	}

	for(int i = 0; i < 5; i++)
	{
		if (freq[i] >= freq[mayor_freq])
		{
			mayor_freq = i;
		} 
	}

	if(mayor_precio == mayor_freq)
		printf("\nEl microprocesador mas caro es tambien el mas rapido");
	else
		printf("\nEl microprocesador mas caro no es tambien el mas rapido");

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
