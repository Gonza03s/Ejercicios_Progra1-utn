/*
 ============================================================================
 Name        : 5-2.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :
Ejercicio 5-2: Hacer una función que calcule el promedio de los valores del Array que
recibe. y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float promedioArray(int valoresAcumulados[]);

int main(void)
{

	setbuf(stdout, NULL);

	int arrayNumeros[5];
	int i;
	float resultadoPromedioArray;
	int acumuladorValoresDelArray = 0;

	for(i= 0; i < 5 ;i++)
	{
		printf("Ingrese el numero %d\n", i+1);
		scanf("%d" , &arrayNumeros[i]);


		acumuladorValoresDelArray += arrayNumeros[i];
	}

	resultadoPromedioArray = promedioArray(acumuladorValoresDelArray);

	printf("El promedio de tus numeros ingresados es: %.2f" , resultadoPromedioArray);


	return EXIT_SUCCESS;
}

float promedioArray(int valoresAcumulados[])
{
	float operacion;

	operacion = (float) valoresAcumulados / 5; //promedio: la suma de los valores / la cantidad de valores

	return operacion;
}

