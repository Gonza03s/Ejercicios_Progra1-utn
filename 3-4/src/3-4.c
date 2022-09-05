/*
 ============================================================================
 Name        : 3-4.c
 Author      : gonzalosuarez
 Version     : div D
 Description :
 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2 para que valide el número en
 un rango determinado. 20 50
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float numeroFlotante();
void muestra(float numeroUno);
float rango(float numero); //formales

int main(void)
{
	setbuf(stdout, NULL);

	float resultado;

	resultado = numeroFlotante();

	muestra(resultado); //actuales, reales


	return EXIT_SUCCESS;
}

float rango(float numero)
{
	while (numero < 20 ||  numero > 50)
	{
		printf("Error. ingrese el numero en un rango valido entre 20 y 50");
		scanf("%f" , &numero);
	}

	return numero;
}

float numeroFlotante()
{
	float valorA;
	float validacionflotante;

	printf("Ingrese el primer valor");
	scanf("%f", &valorA);

	validacionflotante = rango(valorA);

	return validacionflotante;
}

void muestra(float numeroUno)
{
	printf("su numero ingresado es: %.2f" ,numeroUno);
}













