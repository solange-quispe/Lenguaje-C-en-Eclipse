/*
 ============================================================================
 Name        : clase5_ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

#define EDADESSIZE 5
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos);
float promediarArrayInt(int arrayInt[],int len); // PROTOTIPO
int promediarArrayIntV2(int* pPromedioResultado,int array[],int len); // PROTOTIPO2
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	// EJERCICIO: Hacer una funcion que calcule el promedio de los valores
	// del array que recibe y me devuelve el promedio

	int edades[EDADESSIZE];
	int edad;
	int i;
	float promedioEdad;
	// Recorro de forma secuencial para guardar los valores
	for(i=0;i<EDADESSIZE;i++)
	{
		if(utn_getNumero(&edad,"Ingrese edad:\n","La edad debe ser de 0 a 150\n",0,150,2))
		{
			edades[i] = edad;
		}
		else
		{
			printf("ERROR!!\n");
		}
	}
	//utn_imprimirArrayInt(edades,EDADESSIZE);
	promedioEdad = promediarArrayInt(edades,EDADESSIZE);

	printf("Promedio de edades:%f\n",promedioEdad);
	// SEGUNDA RESOLUCION
	if(promediarArrayIntV2(&promedioEdad,edades,EDADESSIZE)==0)
	{

	printf("Promedio de edades:%f\n",promedioEdad);

	}
	return EXIT_SUCCESS;
}
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos)
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

// PRIMERA RESOLUCION
float promediarArrayInt(int arrayInt[],int len) // utn.c
{
	int i;
	float resultado;
	int acumuladorArray = 0;
	for(i=0;i<len;i++)
	{
		acumuladorArray = acumuladorArray + arrayInt[i];
	}
	resultado = ((float)acumuladorArray) / len; // lo casteo

	return resultado; // asi me devuelve el resultado
}
// SEGUNDA RESOLUCION
int promediarArrayIntV2(int* pPromedioResultado,int array[],int len)
{
	int i;
	int suma = 0;
	int ret = -1;

	if(len>0 && pPromedioResultado != NULL && array != NULL)
	{
		for(i=0;i<len;i++)
		{
			suma = suma + array[i];
		}

	//printf("%d",suma);

	*pPromedioResultado = suma / len;

	}
	return ret; // OK
}
