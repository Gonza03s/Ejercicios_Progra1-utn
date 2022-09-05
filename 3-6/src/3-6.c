/*
 ============================================================================
 Name        : 3-6.c
 Author      : gonzalosuarez
Description : div D

Ejercicio 3-6: Realizar un programa que: asigne a la variable numero1 un valor
solicitado al usuario, valide el mismo entre 10 y 100, realice un descuento del 5% a
dicho valor a través de una función llamada realizarDescuento(). Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo / declaracion

int solicitudnro(void);

int validaciones(int numeroUno);

float realizarDescuento(int numero);

int main(void)
{
	setbuf(stdout, NULL);

	int numeroValidado;
	float numeroValidadoConDescuento;

	numeroValidado = solicitudnro(); //numero solicitado del usuario y validado

	numeroValidadoConDescuento = realizarDescuento(numeroValidado);

	printf("el resultado con descuento es de: %.2f" ,numeroValidadoConDescuento);

	return EXIT_SUCCESS;
}
//desarrollo de la funcion

int solicitudnro(void)
{
	int numero1;
	int resultado;

	printf("Ingrese un numero");
	scanf("%d", &numero1);

	resultado = validaciones(numero1);

	return resultado;
}

int validaciones(int numeroUno)
{
	while(numeroUno < 10 || numeroUno > 100 )
	{
		printf("Error. reIngrese un numero");
		scanf("%d", &numeroUno);
	}

	return numeroUno;
}

float realizarDescuento(int numero)
{
	float operacion;
	float descuento;

	operacion = (float) (numero * 5) / 100;
	descuento =  numero - operacion;

	return descuento;
}




















