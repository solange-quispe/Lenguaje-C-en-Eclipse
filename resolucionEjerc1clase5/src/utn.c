/*
 * utn.c
 *
 *  Created on: 28 sept. 2020
 *      Author: Pescar
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

float getFloat(char mensaje[])
{
	float auxiliar;
	// con el %s indico que lo que voy a imprimir por pantalla es un string
	// que es lo que estoy recibiendo
	printf("%s",mensaje);
	scanf("%f",&auxiliar);
	return auxiliar;
}

int getInt(char mensaje[])
{
	int auxiliar;
	// con el %s indico que lo que voy a imprimir por pantalla es un string
	// que es lo que estoy recibiendo
	printf("%s",mensaje);
	scanf("%d",&auxiliar);
	return auxiliar;
}

char getChar(char mensaje[])
{
	char auxiliar;
	// con el %s indico que lo que voy a imprimir por pantalla es un string
	// que es lo que estoy recibiendo
	printf("%s",mensaje);
	// me limpia la "basura"
	fflush(stdin); // SIEMPRE EN CHAR
	scanf("%c",&auxiliar);
	return auxiliar;
}

int printArrayInt(int* pArray, int limite)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite >= 0) // esto seria VALIDARLO!!
	{
		retorno = 0;
		for(i = 0; i < limite; i++)
		{
			printf("\n[DEBUG] Indice: %d - Valor: %d",i,pArray[i]);
		}
	}
	return retorno;
}

// brief Ordena un array de enteros de manera descendente
// parametro pArray Es el puntero al array a ser ordenado
// parametro sizeof Es la longitud del array
// return Cantidad de iteraciones necesarias para ordenar, si OK 0 -2 para indicar un ERROR

int ordenarArrayInt(int* pArray, int limite)
{
	// todo lo que no es Cero es Verdadero en C
	int flagSwap;
	int i;
	int contador = 0;
	int retorno = -1;
	int buffer;

	if(pArray != NULL && limite >= 0)
	{
		do
		{
			flagSwap = 0;
			for(i=0; i<limite-1; i++)
			{
				if(pArray[i] < pArray[i+1])
				{
					flagSwap = 1;
					buffer = pArray[i];
					pArray[i] = pArray[i+1];
					pArray[i+1] = buffer;
				}
				contador++;
			}
		}while(flagSwap);
		retorno = contador; // esto me imprime la cantidad de iteraciones que realizo mi programa para ordenar eso
	}
	return retorno;
}


