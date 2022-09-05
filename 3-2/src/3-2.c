/*
 ============================================================================
 Name        : 3-2.c
 Author      : gonzalosuarez
 Version     : div D
 Description :
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroFlotante();

int main()
{
	setbuf(stdout, NULL);

	float numeroIngresado;

	numeroIngresado = numeroFlotante();

	printf("El numero flotante es: %.2f" , numeroIngresado);

	return EXIT_SUCCESS;
}

float numeroFlotante()
{
	float valorA;

	printf("Ingrese el primer valor");
	scanf("%f", &valorA);

	return valorA;
}



