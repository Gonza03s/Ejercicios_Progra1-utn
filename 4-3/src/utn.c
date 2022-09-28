/*
 * utn.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Leo
 */

#include <stdio.h>
#include <stdlib.h>

char pedirLetra()
{
	char letraIngresada;
	printf("Ingrese la letra c (celcius) f (Fahrenheit)");
	fflush(stdin);
	scanf("%c" , &letraIngresada);

	return letraIngresada;
}

char validarLetra(char caracter)
{
	while(caracter != 'c' && caracter != 'f')
	{
		printf("Ingrese la letra nuevamente c (celcius) o f (Fahrenheit)");
		fflush(stdin);
		scanf("%c" , &caracter);
	}

	return caracter;
}

int pedirCelsius()
{
	int grados;

	printf("Ingrese la temperatura (entre 0 y 100)");
	scanf("%d" , &grados);

	return grados;
}

int validarCelsius(int gradosCelcius)
{

	while(gradosCelcius < 0 || gradosCelcius > 100)
	{
		printf("Error. reingrese la temperatura (entre 0 y 100)");
		scanf("%d" , &gradosCelcius);
	}

	return gradosCelcius;

}


int pedirFahrenheit()
{
	int grados;

	printf("Ingrese la temperatura (entre 32 y 212)");
	scanf("%d" , &grados);

	return grados;
}

int validarFahrenheit(int gradosFahrenheit)
{

	while(gradosFahrenheit < 32 || gradosFahrenheit > 212)
	{
		printf("Error. reingrese la temperatura (entre 32 y 212)");
		scanf("%d", &gradosFahrenheit);
	}

	return gradosFahrenheit;

}

int convertirCelsiusAF(int celsiusIngresados)
{
	int resultado;

	resultado = (celsiusIngresados * 9 / 5) + 32;

	return resultado;
}

int convertirFahrenheitaC(int FahrenheitIngresados)
{
	int resultado;

	resultado = FahrenheitIngresados - ( 32 * 5 / 9);

	return resultado;
}













