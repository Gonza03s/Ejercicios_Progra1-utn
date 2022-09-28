/*
 ============================================================================
 Name        : 4-3.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :
Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.
Celsius = ebullicion 100, congelacion 0
Fahrenheit = 212, congelacion 32
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"




int main(void)
{
	setbuf(stdout, NULL);

	char letraIngresada;
	char letraValidada;
	int gradosCelsius;
	int celsiusvalidados;
	int gradosFahrenheit;
	int gradosFahrenheitValidados;
	int resultadoCelsiusFaren;
	int resultadoFarenACelsius;


	letraIngresada = pedirLetra();

	letraValidada = validarLetra(letraIngresada);

	if(letraValidada == 'c')
	{
		gradosCelsius = pedirCelsius();
		celsiusvalidados = validarCelsius(gradosCelsius);
		resultadoCelsiusFaren = convertirCelsiusAF(celsiusvalidados);

		printf("El resultado de tu conversion de C a F es: %d" , resultadoCelsiusFaren);

	}
	else if(letraValidada == 'f')
	{
		gradosFahrenheit = pedirFahrenheit();
		gradosFahrenheitValidados = validarFahrenheit(gradosFahrenheit);
		resultadoFarenACelsius = convertirFahrenheitaC(gradosFahrenheitValidados);

		printf("El resultado de tu conversion de F a C es: %d" , resultadoFarenACelsius);
	}


	return EXIT_SUCCESS;
}












