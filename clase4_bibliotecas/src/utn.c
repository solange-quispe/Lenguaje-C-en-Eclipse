/*
 * utn.c
 *
 *  Created on: 9 sept. 2020
 *      Author: Pescar
 */
#include <stdio.h>
#include <stdlib.h>
// aca tengo que incluir todas las bibliotecas que utilice
// cada vez que nosotros necesitemos obtener un numero entero la vamos a llamar
// no importa en que proyecto estemos, vamos a usar esta funcion
																			// el 2 serian los reintentos + el primer intento
int utn_getNumero(&edad,"Edad\n","ERROR!! la edad debe ser entre 0 y 199\n",0,199,2);

// TABLA DE CODIGOS ASCII, para entender esto "char minimo, char maximo,"
int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);
{
	char bufferChar;
	int retorno = -1; // SIEMPRE!!
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			// COMO IMPRIMIR "char* mensaje"
			// uso %s porque lo que recibi es una cadena de caracteres o un string
			printf("%s",mensaje);
			fflush(stdin);
			// leo lo que el usuario me ingreso
			scanf("%c",&bufferChar);
			if(bufferChar >= minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
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

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
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
//TRATAR DE DEJAR DE USAR PRINTF Y SCANF Y REEMPLAZARLO POR FUNCIONES (tarea)

