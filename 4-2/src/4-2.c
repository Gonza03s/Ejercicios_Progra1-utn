/*
 ============================================================================
 Name        : 4-2.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :
Ejercicio 4-2: Realizar una función Suma que reciba como parámetros dos enteros (los que
va a sumar) y un puntero a entero que guardara el resultado de esta. La función retorna 1 si
pudo realizar la suma y cero en caso de no haberla podido realizar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int numero, int numeroDos, int* pResultado);


int main(void)
{
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultado;
	int respuesta;


	printf("Ingrese el primer numero");
	scanf("%d" , &numeroUno);

	printf("Ingrese el segundo numero");
	scanf("%d" , &numeroDos);

	respuesta =	suma(numeroUno,numeroDos, &resultado);


	if(respuesta == 1)
	{
		printf("Se pudo realizar la operacion, el resultado es: %d" , resultado);
	}
	else
	{
		printf("No se pudo realizar la operacion");
	}


	return EXIT_SUCCESS;
}


int suma(int numero, int numeroDos, int* pResultado)
{
	int operacion;
	int retorno = 0;

	//para corroborar si recibi una direccion de memoria

	if(pResultado != NULL && numero > 0 && numeroDos > 0)
	{
		operacion = numero + numeroDos;

		*pResultado = operacion;

		retorno = 1;
	}

	return retorno;
}













