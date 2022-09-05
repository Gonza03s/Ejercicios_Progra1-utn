/*
 ============================================================================
 Name        : ejercicio.c
 Author      : gonzalosuarez
 Version     :
 Description : DIV D
Ejercicio 2-6:
Ingresar 5 caracteres e informar cuantas letras m (minúsculas) se ingresaron.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	char caracterIngresado;
	int contadorDeCaracteresm = 0;

	for(int contador = 0;contador < 5;contador++)
	{
		printf("Ingrese un caracter");
		fflush(stdin);
		scanf("%c", &caracterIngresado);

		if(caracterIngresado == 'm')
		{
			contadorDeCaracteresm++;
		}

	}

	//salida de datos

	printf("los caracteres m ingresados fueron: %d", contadorDeCaracteresm);

	return EXIT_SUCCESS;
}
