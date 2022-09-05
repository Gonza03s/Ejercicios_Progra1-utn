/*
 ============================================================================
 Name        : ejercicio.c
 Author      : gonzalosuarez
 Version     : Div D
 Description : Ejercicio 2-5:
Debemos generar el pedido de libretas universitarias a la imprenta para los alumnos
al regreso a la presencialidad. De cada persona debemos obtener los siguientes
datos:
número de legajo (4 cifras sin ceros a la derecha),
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad (más de 17),
año de ingreso (validar por favor)
y género ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por libreta universitaria es de $450.
Se debe informar (solo si corresponde):
a) La cantidad de personas mayores de 60 años.
b) El legajo y edad de la mujer que ingreso hace más tiempo.
c) Cuanto debe abonar la facultad por las libretas sin el descuento///
d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
de la libreta se le hace un 25%. Informar los valores si corresponde.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);

	char respuesta = 's';
	int numeroDeLegajo;
	char estadoCivil;
	int edadIngresada;
	int momentoDeingreso;
	char generoIngresado;
	int precioLibreta;
	int cantidadDeLibretas;

	precioLibreta = 450;

	int contadorPersonasMayores = 0;
	int flagPrimer = 0;
	int mayorMomentoDeIngreso;
	int legajoMujer;
	int edadDeLaMujer;
	int porcentaje;
	int PorcentajeDeDescuento;
	int descuento;
	int precioCrudo;

	while(respuesta == 's')
	{

		printf("Introduzca su numero de legajo");
		scanf("%d" ,&numeroDeLegajo);

		printf("Introduzca su estado civil( s para soltero c para casado o v viudo)");
		fflush(stdin);
		scanf("%c" , &estadoCivil);

		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v' )
		{
			printf("Error. Introduzca su estado civil( s para soltero c para casado o v viudo)");
			fflush(stdin);
			scanf("%c" , &estadoCivil);
		}

		printf("Introduzca su edad");
		scanf("%d" , &edadIngresada);

		while(edadIngresada < 17)
		{
			printf("Error. Introduzca su edad");
			scanf("%d" , &edadIngresada);
		}

		printf("introduzca su año de ingreso 2016 - 2022");
		scanf("%d" , &momentoDeingreso);

		while(momentoDeingreso < 2016 || momentoDeingreso > 2022)
		{
			printf("Error. introduzca su año de ingreso 2016 - 2022");
			scanf("%d" , &momentoDeingreso);
		}

		printf("introduzca su genero: ('f' para femenino, 'm' para masculino, 'o' para no binario) ");
		fflush(stdin);
		scanf("%c" , &generoIngresado);

		while(!(generoIngresado == 'f' || generoIngresado == 'm' || generoIngresado == 'o' ))
		{
			printf("Error. introduzca su genero: ('f' para femenino, 'm' para masculino, 'o' para no binario) ");
			fflush(stdin);
			scanf("%c" , &generoIngresado);
		}

		printf("Cuantas libretas necesita?");
		scanf("%d", &cantidadDeLibretas);

//Problemas a resolver

//a) La cantidad de personas mayores de 60 años.

		if(edadIngresada > 60)
		{
			contadorPersonasMayores++;
		}

//b) El legajo y edad de la mujer que ingreso hace más tiempo.

		if( generoIngresado == 'f'|| momentoDeingreso > mayorMomentoDeIngreso)
		{
			mayorMomentoDeIngreso = momentoDeingreso;
			legajoMujer = numeroDeLegajo;
			edadDeLaMujer = edadIngresada;
		}

//c) Cuanto debe abonar la facultad por las libretas sin el descuento


//d) Si se solicitan mas de 5 libretas hay un 5% de descuento, si se solicitan más de
//10 libretas se hace 10%. Además, por cada alumno mayor de 60 años al valor original
//de la libreta se le hace un 25%. Informar los valores si corresponde.


		//modificacion de la variable de control
		printf("Quiere seguir ingresando alumnos? (s/n)");
		fflush(stdin);
		scanf("%c" , &respuesta);
	}

//operaciones fuera del bucle

			if(cantidadDeLibretas > 5)
			{
				porcentaje = 5;
			}
			else if(cantidadDeLibretas > 10)
			{
				porcentaje = 10;
			}
			else if(edadIngresada > 60)
			{
				porcentaje = 25;
			}
			else
			{
				porcentaje = 0;
			}

	precioCrudo = ( precioLibreta * cantidadDeLibretas );

	PorcentajeDeDescuento = precioCrudo * porcentaje / 100;
	descuento = precioCrudo - PorcentajeDeDescuento;

	//salida de datos

	printf("\na) La cantidad de personas mayores de 60 años es: %d" , contadorPersonasMayores);
	printf("\nb) El legajo de la mujer que ingreso hace más tiempo es: %d y su edad es %d", legajoMujer, edadDeLaMujer);
	printf("\nc) lo que debe abonar la facultad por las libretas sin el descuento es: %d", precioCrudo);
	printf("\nd) su pago es de: %d", descuento);

	return EXIT_SUCCESS;
}
