/*
 ============================================================================
 Name        : ejercicio2-2.c
 Author      : gonzaloSuarez
Description  :div D
Ejercicio 2-2: Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	char respuesta = 's';
	int numeroEnteroPositivo;
	int numeroEnteroNegativo;
	int contadorDeIteraciones = 0;
	float promedioPositivos;
	float promedioNegativos;
	int acumuladorNumerosPositivos = 0;
	int acumuladorNumerosNegativos = 0;

	int flagPrimer =0;
	int flagSegunda =0;

	int enteroPositivoMenor;
	int maximoNumeroNegativo;

	while(respuesta == 's')
	{

		printf("Ingrese un numero entero positivos");
		scanf("%d" ,&numeroEnteroPositivo);

		printf("Ingrese un numero entero negativo");
		scanf("%d" ,&numeroEnteroNegativo);

		acumuladorNumerosPositivos += numeroEnteroPositivo;

		acumuladorNumerosNegativos += numeroEnteroNegativo;

//a) El promedio de los positivos

//y su mínimo.

		if( (flagPrimer == 0) || numeroEnteroPositivo < enteroPositivoMenor)
		{
			enteroPositivoMenor = numeroEnteroPositivo;
			flagPrimer = 1;
		}

//b) El promedio de los negativos

//y su máximo.
		if( (flagSegunda == 0) || numeroEnteroNegativo > maximoNumeroNegativo)
		{
			maximoNumeroNegativo = numeroEnteroNegativo;
			flagSegunda = 1;
		}


		contadorDeIteraciones++;
		respuesta = printf("quiere seguir ingresando numeros? s/n");
		fflush(stdin);
		scanf("%c" , &respuesta);
	}

	//operaciones fuera del bucle

	promedioPositivos = (float) acumuladorNumerosPositivos / contadorDeIteraciones;

	promedioNegativos = (float) acumuladorNumerosNegativos / contadorDeIteraciones;

	//salida de datos

	printf("El promedio de los positivos es: %.2f\n", promedioPositivos);

	printf("El promedio de los negativos es: %.2f", promedioNegativos);


	return EXIT_SUCCESS;
}
