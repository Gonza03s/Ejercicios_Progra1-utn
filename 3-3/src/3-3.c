/*
 ============================================================================
 Name        : 3-3.c
 Author      : gonzalosuarez
 Version     : div D
 Description :
Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroPar(int numeroPar);

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int resultado;

	printf("Ingrese un numero");
	scanf("%d" , &numeroIngresado);


	resultado = numeroPar(numeroIngresado);

	if(resultado == 1)
	{
		printf("su numero es par");
	}
	else
	{
		printf("su numero es impar");
	}

	return EXIT_SUCCESS;
}

int numeroPar(int numeroPar)
{
	if( (numeroPar % 2) == 0)
	{
		return  1;
	}

	return 0;
}
