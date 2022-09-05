/*
 ============================================================================
 Name        : ejerciciosUno.c
 Author      : Gonzalo Suarez Div D
 Copyright   : Your copyright notice
 Description :
Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout, NULL);

    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingresa un numero");
    scanf("%d" , &numeroUno);

    while(numeroUno < -50 || numeroUno > 100)
    {
        printf("reingresa un numero");
        scanf("%d" , &numeroUno);
    }

    printf("Ingresa el segundo numero");
    scanf("%d" , &numeroDos);

    while(numeroDos < -50 || numeroDos > 100)
    {
        printf("Ingresa el segundo numero");
        scanf("%d" , &numeroDos);
    }

    suma = numeroUno + numeroDos;

    printf("El primer valor es: %d \n el segundo valor es: %d \n y la suma de los mismos da %d:" , numeroUno , numeroDos, suma);

    return 0;
}
