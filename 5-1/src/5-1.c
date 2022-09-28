/*
 ============================================================================
 Name        : 5-1.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :
Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numerosEnteros[5];
	int acumuladorNumeros = 0;
	int i;

	for(i = 0; i < 5; i++)
	{
		printf("Ingrese un numero\n");
		scanf("%d", &numerosEnteros[i]);

		acumuladorNumeros += numerosEnteros[i];
	}

	for(i = 0; i < 5; i++)
	{

		if( (numerosEnteros[i] % 2) == 1)
		{
			printf("Los numeros impares ingresados son: %d\n" , numerosEnteros[i]);
		}

	}

	printf("La suma de los valores es: %d" , acumuladorNumeros);

	return EXIT_SUCCESS;
}
