/*
 ============================================================================
 Name        : 3-1.c
 Author      : gonzalosuarez
 Version     :div D
 Copyright   :
 Description :
 Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void muestra(int numeroUno);

int main(void)
{
	setbuf(stdout, NULL);
	int numeroEntero;

	printf("Ingrese un numero entero");
	scanf("%d",&numeroEntero);

	muestra(numeroEntero);

	return EXIT_SUCCESS;
}

void muestra(int numeroUno)
{
	printf("su numero ingresado es: %d" ,numeroUno);
}

