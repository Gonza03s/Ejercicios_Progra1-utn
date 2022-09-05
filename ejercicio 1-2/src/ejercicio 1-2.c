/*
 ============================================================================
 Name        : Ejercicio 1-2
 Author      : Gonzalo Suarez
 Version     : div D
 Copyright   : Your copyright notice
 Description : :ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	int numeroIngresadoUno;

	int numeroIngresadoDos;

	int numeroIngresadoTres;

	printf("ingrese el primer numero");
	scanf("%d" ,&numeroIngresadoUno);

	printf("ingrese el segundo numero");
	scanf("%d" ,&numeroIngresadoDos);

	printf("ingrese el tercer numero");
	scanf("%d" ,&numeroIngresadoTres);

	if( (numeroIngresadoUno > numeroIngresadoDos) && (numeroIngresadoUno > numeroIngresadoTres) )
	{
		printf("El mayor de los numeros es el primero %d", numeroIngresadoUno);
	}
	else if(numeroIngresadoDos > numeroIngresadoTres)
	{
		printf("El mayor de los numeros es el segundo %d", numeroIngresadoDos);
	}
	else
	{
		printf("El mayor de los numeros es el tercero %d", numeroIngresadoTres);
	}

	return EXIT_SUCCESS;
}
