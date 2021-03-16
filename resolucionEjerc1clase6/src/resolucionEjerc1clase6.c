/*
 ============================================================================
 Name        : resolucionEjerc1clase6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define MAXINPUT 100 //constante con tamaño de array
/*Agregar a la biblioteca utn.h funciones para obtener y validar diferentes tipos
de valores:

  - Solo números, ej. 123436679
  - Solo letras, ej. abBD
  - Alfanumericos, ej. ab555gT6
  - Teléfonos, ej. 4XXX-XXXX

Realizar un programa que pida al usuario el ingreso de un dato y determine con
cuales de los tipos cumple.*/

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	char input[MAXINPUT]; // declaro una cadena de caracteres
	int length; // largo

	printf("Ingrese un valor: ");
	scanf("%s", input); // va sin & porque una cadena de caracteres ya es un puntero
	length = strlen(input); // me indica el largo de la cadena, se ser 0 no evalua nada
	if(length > 0) //si por ejemplo tiene largo 0 directamente no evalua nada
	{
		if(esNumerico(input)) // aca estamos preguntando si lo que ingreso el usuario es numerico
		{
			printf("Si es un numero\n");
		}
		if(esSoloLetras(input)) // aca estamos preguntando si lo que ingreso el usuario es solo letras
		{
			printf("Si es solo letras\n");
		}
		if(esAlfanumerico(input)) // aca estamos preguntando si lo que ingreso el usuario es alfanumerico
		{
			printf("Si es alfanumerico\n");
		}
		if(esTelefono(input)) // aca estamos preguntando si lo que ingreso el usuario es un telefono
		{
			printf("Si es un numero de telefono\n");
		}

	}
	return EXIT_SUCCESS;
}
