/*
 ============================================================================
 Name        : tareadelsabado.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!
	/*Solicitar al usuario que ingrese una serie de números la cual
	finaliza al introducir el 999 (el 999 no debe ser tenido en cuenta
	para dicho cálculo). Una vez finalizado el ingreso de números el
	programa deberá mostrar el promedio de dichos números por pantalla.*/
	int acumulador = 0;
	int numero;
	int contador = 0;
	float promedio;
	// NECESITO UN WHILE QUE SE EJECUTE TODO EL TIEMPO POR ESO ES TRUE
	while(TRUE)
	{
		printf("Ingrese un numero(\*999\* Finaliza el ingreso): ");
		//ESTO LO TENGO QUE PONER SI O SI DESPUES DEL PRINTF
		scanf("%d",&numero);
		if(numero != 999)
		{
			acumulador = acumulador + numero;
			contador++;
		}
		else
		{
			break;
		}
	}
	// PONER EL FLOAT ENTRE PARENTESIS ES "CASTEAR"
	promedio = (float)acumulador/contador;
	printf("\nEl promedio es: %f",promedio);
	return EXIT_SUCCESS;
}
