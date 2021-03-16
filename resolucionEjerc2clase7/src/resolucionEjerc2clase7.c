/*
 ============================================================================
 Name        : resolucionEjerc2clase7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "utn.h"
int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos);

#define MES 31
/*
 * Ejercicio 2:
 * Crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes
 * Definir un Array de floats de 31 posiciones. Cada posicion corespondera a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1-Imprimir array y 2-Cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu principal.
 * Utilizar la funcion utn getNumeroFloat() de la biblioteca utn.h
 */
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	float temperaturaDias[MES]; // 0...30
	int opcionesMenu;
	int i;
	int dia; // 1....31
	float temperatura;

do{
	printf("Menu de operaciones\n"
			"1-Imprimir Array\n"
			"2-Cargar Array\n"
			"3-Salir\n");
	if(utn_getInt(&opcionesMenu, "Ingrese la opcion deseada: ", "ERROR. Opcion no valida\n",0,3,2) == 0)
	{
		switch(opcionesMenu)
		{
		case 1:
			for(i=0;i<MES;i++)
			{
				printf("Dia: %d -- Valor: %.2f\n", i+1, temperaturaDias[i]);
			}
			break;
		case 2:
			for(i=0; i<MES; i++)
			{
				if(utn_getInt(&dia, "Ingrese el dia [1-31]: ", "ERROR. Dia no valido\n",1,31,2) == 0);
				{
					if(utn_getFloat(&temperatura,"Ingrese temperatura: ", "ERROR, numero invalido\n", 0, 100, 2) == 0)
					{
					// cargar temperatura en el array en la posicion que corresponda
						temperaturaDias[dia -1] = temperatura; // le resto 1 para que me tome la piscion 0
					}
				}
			}
			break;
		}
	}
}while(opcionesMenu != 3);

	return EXIT_SUCCESS;
}

int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
	// INTERACTUAMOS CON EL USUARIO, buffer es un espacio de almacenamiento intermedio
	// buffer es un espacio de intercambio con el usuario
	int bufferInt;
	int retorno = -1; // SIEMPRE!!
	// VERIFICAR QUE TODOS LOS PUNTEROS QUE RECIBA NO SEAN NULL, SIEMPRE!!

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			// COMO IMPRIMIR "char* mensaje"
			// uso %s porque lo que recibi es una cadena de caracteres o un string
			printf("%s",mensaje);
			// leo lo que el usuario me ingreso
			scanf("%d",&bufferInt);

			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				// si obtuve lo que queria me salgo con el break
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}

		}while(reintentos >= 0);
	}
	return retorno; //SIEMPRE!!
}

int utn_getInt(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);

	}

	return retorno; //SIEMPRE!!

}

