/*
 ============================================================================
 Name        : ejercicio2-4.c
 Author      : gonzalosuarez
 Version     : div D
 Copyright   : Your copyright notice
 Description :Ejercicio 2-4:

Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.
b. De los pares el mayor número ingresado.
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int flagPrimer = 0;
	int menorNumeroIngresado;
	int mayorNumeroPar;
	int acumuladorNumerosPares;
	int factor;
	int acumuladorDeNumeroNegativos;
	int mayorNumero;
	int numeroParMayor;
	int flagSegunda = 0;
	int numeroMayorIngresado;
	int posicionMayorNumero;

	factor =1;

	for(int i = 0;i < 8;i++)
	{
		printf("Ingrese un numero");
		scanf("%d" , &numeroIngresado);

		while(numeroIngresado == 0)
		{
			printf("Error. Reingrese un numero distinto a cero");
			scanf("%d" , &numeroIngresado);
		}

//problemas

//a. El menor número ingresado.

		if( (flagPrimer == 0) || numeroIngresado < menorNumeroIngresado)
		{
			menorNumeroIngresado = numeroIngresado;
			flagPrimer = 1;
		}

//b. De los pares el mayor número ingresado.

		if( (numeroIngresado % 2) == 0)
		{
			if( (flagSegunda == 0) || numeroIngresado > numeroParMayor )
			{
				numeroParMayor = numeroIngresado;
				flagSegunda = 1;
			}
		}

//c. Producto de los negativos.

		if(numeroIngresado < 0)
		{
			acumuladorDeNumeroNegativos += numeroIngresado;
		}

		//factor = factor * aculadorDeNumerosNegativos

		factor *= acumuladorDeNumeroNegativos;

//d. En qué lugar fue ingresado el mayor numero

		if( (i == 0)	||	numeroIngresado > numeroMayorIngresado )
		{
			numeroMayorIngresado = numeroIngresado;
			posicionMayorNumero = i;
		}

	}

	//salida de datos

	printf("\na) El menor número ingresado es: %d" , menorNumeroIngresado);
	printf("\nb) De los pares el mayor número ingresado es: %d" ,numeroParMayor );
	printf("\nc) Producto de los negativos es: %d" , factor);
	printf("\nd) El lugar donde fue ingresado el mayor numero es %d" ,posicionMayorNumero);


	return EXIT_SUCCESS;
}
