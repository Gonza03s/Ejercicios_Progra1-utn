/*
 ============================================================================
 Name        : ejercicio2-1.c
 Author      : gonzaloSuarez
 Description :Div D
Ejercicio 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresado;
	int contador = 0;
	float promedio;
	int acumuladorDeNumeros = 0;

	for(contador = 0;contador < 7;contador++)
	{
		printf("ingrese numeros negativos distintos de cero");
		scanf("%d" , &numeroIngresado);

		while( (numeroIngresado == 0 ) || (numeroIngresado > 0) )
		{
			printf("Error. Ingrese numeros negativos distintos de cero y no ingrese numeros positivos");
			scanf("%d" , &numeroIngresado);
		}

		acumuladorDeNumeros += numeroIngresado;
	}

	//a- promedio de los numeros

	promedio = (float) acumuladorDeNumeros / contador;

	//salida de datos

	printf("El promedio de los numeros negativos es: %.2f", promedio);

	return EXIT_SUCCESS;
}
