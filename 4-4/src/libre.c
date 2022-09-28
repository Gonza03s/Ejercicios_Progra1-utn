/*
 * libre.c
 *
 *  Created on: 10 sep. 2022
 *      Author: Leo
 */
#include <stdio.h>
#include <stdlib.h>
#include "libre.h"


int menuPrincipal(void)
{
	int opcionUsuario;
printf("==========================================================================");
	printf("\nMenu Principal:\n\n"
			"1. Loguearse\n"
			"2. Comprar\n"
			"3. Ver mis compras\n"
			"4. vender\n"
			"5. Salir\n"
	"============================================================================");
	scanf("%d", &opcionUsuario);



	return opcionUsuario;
}


int menuDeVentas(int* banderaComprar)
{
	int respuestaUsuario;

	do
	{
		printf("===========================================================================");
		printf("\nMenu de ventas:\n\n"
				"1. Vender\n"
				"2. Hacer factura\n"
				"3. Volver atras\n"
				"===========================================================================");
		scanf("%d", &respuestaUsuario);

		if(respuestaUsuario == 1 && *banderaComprar == 0)
		{
			printf("Usted debe comprar para poder ingresar a vender");
		}
		else if(respuestaUsuario == 1 && *banderaComprar == 1)
		{
			printf("Si ingreso a comprar una vez y vendio una vez no puede ingresar al menu de ventas\n");
		}


	}while(respuestaUsuario != 3);



	return respuestaUsuario;

}


char salir()
{
	char respuestaUsuario;

	printf("Desea salir del programa? s/n");
	fflush(stdin);
	scanf("%c" , &respuestaUsuario);

	while(respuestaUsuario != 's' && respuestaUsuario != 'n')
	{
		printf("Error. Quiere salir del programa? (s = si / n = no)");
		fflush(stdin);
		scanf("%c" , &respuestaUsuario);
	}

	if(respuestaUsuario == 's')
	{
		printf("Cerrando programa...");
	}
	return respuestaUsuario;
}








