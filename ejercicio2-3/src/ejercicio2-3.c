/*
 ============================================================================
 Name        : ejercicio2-3.c
 Author      : gonzalosuarez
 Version     :
 Description : div D
Ejercicio 2-3: Usando el concepto de operadores lógicos booleanos en el condicional.
Solicitar un número al usuario e informar si el número es par o impar.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	setbuf(stdout, NULL);

	int numeroIngresado;
	char respuesta = 's';


	while(respuesta == 's')
	{

		printf("Ingrese un numero");
		scanf("%d" , &numeroIngresado);

		if( (numeroIngresado % 2) == 0)
		{
			printf("Su numero es par\n");
		}
		else
		{
			printf("Su numero es impar\n");
		}

		printf("Quiere seguir ingresado numeros? s/n");
		fflush(stdin);
		scanf("%c" , &respuesta);
	}


	return EXIT_SUCCESS;
}
