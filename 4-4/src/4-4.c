/*
 ============================================================================
 Name        : 4-4.c
 Author      : GonzaloSuarez
 Version     :
 Copyright   : Div D
 Description :

Ejercicios 4-4:
Hacer el menú de un programa en el MAIN con las siguientes opciones:
1. Loguearse
2. Comprar
3. Ver mis compras
4. Vender
5. Salir
Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.
Ahora agregamos, chequear que no pueda ver sus compras, si no ingresó primero a
comprar al menos una vez.
Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga:
1. Vender
2. Hacer factura
3. Volver atrás.

A lo anterior sumarle que haya compras para poder vender.

(Si compré una vez y vendí una vez no puedo ingresar a vender).

Pasar las acciones de menú a funciones y llevarlas a una biblioteca

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "libre.h"

int main(void)
{
	setbuf(stdout, NULL);

	char respuestaSalir = 'n';
	int respuestaMenuPrincipal;
	int banderaUno = 0;
	int banderaDos = 0;
	int banderaComprar = 0;

	do
	{

		respuestaMenuPrincipal = menuPrincipal();

		switch(respuestaMenuPrincipal)
		{

		case 1:
			banderaUno = 1;
			break;
		case 2:
			if(banderaUno == 0)
			{
				printf("Debe loguearse antes de ingresar a comprar\n");
			}
			banderaComprar++;
			banderaDos = 1;
			break;
		case 3:
			if(banderaUno == 0)
			{
				printf("Debe loguearse antes de ingresar a ver mis compras\n");
			}
			else if(banderaDos == 0)
			{
				printf("Debe ingresar a comprar antes de ver sus compras\n");
			}
			break;
		case 4:
			if(banderaUno == 0)
			{
				printf("Debe loguearse antes de ingresar al menu de ventas\n");
			}
			else if(banderaDos == 0)
			{
				printf("Usted debe comprar antes de ingresar al menu de ventas\n");
			}
			else
			{
				menuDeVentas(&banderaComprar);
			}
			break;
		case 5:
			if(banderaUno == 0)
			{
				printf("Debe loguearse antes de ingresar salir\n");
			}
			else
			{
				respuestaSalir = salir();
			}
			break;
		}

	}while(respuestaSalir == 'n');

	return EXIT_SUCCESS;
}







