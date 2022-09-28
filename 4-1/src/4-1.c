/*
 ============================================================================
 Name        : 4-1.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :
Ejercicio 4-1: Realizar un programa en el MAIN que permita calcular y mostrar el factorial de
un número. Utilizar la función de PedirNumero de la ejercitación 3. Por ejemplo:
5! = 5*4*3*2*1 = 120
============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();

int factorial(int n);

int main(void)
{
	setbuf(stdout, NULL);

	int resultado;
	int numeroIngresado;

	numeroIngresado = pedirNumero();

	resultado = factorial(numeroIngresado);

	printf("El resultado es: %d" , resultado);

	return EXIT_SUCCESS;
}


int pedirNumero()
{
	int numero;

	printf("Ingrese un numero");
	scanf("%d" , &numero);

	return numero;
}

int factorial(int n)
{
	int resp;

	if(n==1)
	{
		return 1;
	}

	resp = n* factorial(n-1);

	return (resp);
}




















