/*
 ============================================================================
 Name        : ejercicio.c
 Author      : gonzalosuarez
 Version     : Div D
Description : Hello World in C, Ansi-style
Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//prototipo o declaracion
int resta1(int numeroUno, int numeroDos);

int restar2(void);

void restar3(int numero , int numeroDos);

void restar4(void);

int main(void)
{
	setbuf(stdout, NULL);

	int valorA;
	int valorB;
	int resultado;
	int resultadoDos;

	printf("ingrese el primer numero");
	scanf("%d" ,&valorA);

	printf("ingrese el segundo numero");
	scanf("%d" ,&valorB);

	resultado = resta1(valorA, valorB); //invoco a la funcion  y asigno los valores ingresados
	printf("La respuesta es: %d" , resultado);

	resultadoDos = restar2();

	printf("La respuesta es: %d", resultadoDos);

	restar3(valorA , valorB);

	restar4();

	return EXIT_SUCCESS;
}

	int resta1(int numeroUno, int numeroDos)
	{
		int operacion;

		operacion = numeroUno - numeroDos;

		return operacion;
	}

	int restar2(void)
	{
		int valorA;
		int valorB;
		int resultado;

		printf("ingrese el primer numero");
		scanf("%d" ,&valorA);

		printf("ingrese el segundo numero");
		scanf("%d" ,&valorB);

		resultado = valorA - valorB;

		return resultado;
	}

	void restar3(int numero , int numeroDos)
	{
		int cuenta;

		cuenta = numero - numeroDos;

		printf("el resultado de tu operacion es: %d" ,cuenta);
	}

	void restar4(void)
	{
		int valorA;
		int valorB;
		int resultado;

		printf("ingrese el primer numero");
		scanf("%d" ,&valorA);

		printf("ingrese el segundo numero");
		scanf("%d" ,&valorB);

		resultado = valorA - valorB;

		printf("El resultado es: %d" , resultado);
	}




