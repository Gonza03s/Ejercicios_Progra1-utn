/*
 ============================================================================
 Name        : 3-7.c
 Author      : gonzalosuarez
Description :
Ejercicio 3-7: Realizar un programa que:
asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirNumero();

int validacion(int numero);

char pedirLetra();

char validarLetra(char letraIngresada);

int operacionSuma(int numeroUno, int numeroDos);

int operacionResta(int numeroUno, int numeroDos);

int main(void)
{

	int numero1;
	int numero2;
	char letraIngresadaYValidada;
	int resultadoSuma;
	int resultadoResta;
	char letra;
	char letraValidada;

	numero1 = pedirNumero();
	numero2 = pedirNumero();

	letra = pedirLetra();
	letraValidada = validarLetra(letra);

	resultadoSuma = operacionSuma(numero1, numero2);
	resultadoResta= operacionResta(numero1,numero2);

	printf("El resultado de tu suma es: %d", resultadoSuma);
	printf("\nEl resultado de tu resta es es: %d", resultadoResta);


	return EXIT_SUCCESS;
}


int pedirNumero()
{
	int numeroIngresado;
	int numeroValidado;

	printf("Ingrese un numero");
	scanf("%d" , &numeroIngresado);

	numeroValidado = validacion(numeroIngresado);

	return numeroValidado;

}

int validacion(int numero)
{

	while(numero < 10 || numero > 100)
	{
		printf("Error. reingrese el numero entre 10 y 100");
		scanf("%d" , &numero);
	}

	return numero;
}

char pedirLetra()
{
	char letraIngresada;

	printf("ingrese una letra ( 's'-sumar, 'r'-restar)");
	scanf("%c" , &letraIngresada);

	return letraIngresada;
}

char validarLetra(char letraIngresada)
{
	while(letraIngresada != 's' && letraIngresada != 'r')
	{
		printf("Error. ingrese una letra ( 's'-sumar, 'r'-restar)");
		scanf("%c" , &letraIngresada);
	}

	return letraIngresada;

}

int operacionSuma(int numeroUno, int numeroDos)
{
	int suma;

	suma = numeroUno + numeroDos;

	return suma;

}

int operacionResta(int numeroUno, int numeroDos)
{
	int resta;

	resta = numeroUno - numeroDos;

	return resta;

}

