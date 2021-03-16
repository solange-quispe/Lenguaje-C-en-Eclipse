/*
 ============================================================================
 Name        : resolucionEjerc1clase5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define CANTIDAD 5
/*Solicitar al usuario 5 números, almacenar estos en un array de enteros, permitir
listarlos por pantalla indicando el máximo, el mínimo y el promedio. Permitir
Modificar el valor de cualquiera de los números cargados indicando el índice del
mismo y su nuevo valor.*/
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int arrayDeNumeros[CANTIDAD];
	int numeroIngresado;
	int indiceArray;
	int valorIngresado;
	int opcionMenu;

	for(indiceArray = 0; indiceArray < CANTIDAD; indiceArray++) // indiceArray ++ = indiceArray + 1;
	{
		numeroIngresado = getInt("Ingrese el valor: \n");
		arrayDeNumeros[indiceArray] = numeroIngresado;
	}
	while(opcionMenu != 3)
	{
		opcionMenu = getInt("\n1- Mostrar \n2- Modificar \n3- Salir\n");
		switch(opcionMenu)
		{
		case 1:
			printf("\n\nINDICE - VALOR\n");
			for(indiceArray = 0; indiceArray < CANTIDAD; indiceArray++)
			{
				printf(" %d - %d \n",indiceArray,arrayDeNumeros[indiceArray]);
			}
			break;
		case 2:
			indiceArray = getInt("\nIngrese el indice a modificar: ");
			if(indiceArray >= 0 && indiceArray < CANTIDAD)
			{
				valorIngresado = getInt("Ingrese el valor: \n");
				arrayDeNumeros[indiceArray] = valorIngresado;
			}
			else
			{
				printf("\nEl indice ingresado esta fuera de rango!!!");
			}
			break;
		}//FIN DEL SWITCH
	}// FIN DEL WHILE
	return 0;
}
