/*
 ============================================================================
 Name        : clase5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "utn.h"

// casa vez que encuentra un EDADESSIZE lo remplaza por 5
#define EDADESSIZE 5 // no lleva punto y coma OJO!!

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos);
// INDICE = POSICION
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!
	//SEGUNDA PARTE
	/*int numeros[7];
	int X=0; // LO INICIALIZO, SIEMPRE!!

	do{
		numeros[X] = 5;
		X=X+1;

	}while(X<7);*/

	// un codigo equivalente seria. Como los arrays tienen un tamaño limitado generalmente se usa FOR

	/*int i;
	int numeros[7]; // igual a poner un DEFINE arriba, SIEMPRE!!

	for(i=0;i<7;i++)
	{
		numeros[i] = 5;
	}*/

	// pedirle al usuario 5 edades y luego
	// imprimir las 5 edades. Definir un array de 5 posiciones
	// y usar la funcion utn getNumero para pedir los valores

	// ctrl + c, selecciono la carpeta utn.h y utn.c y lo copio
	// ctrl + v, me paro en el src de mi nueva carpeta y pego lo que copie

	int i;
	int edad;
	// LOS ARRAYS LOS DEFINO EN PLURAL
	int edades[EDADESSIZE];
	// RECORRO PARA CARGAR EN FORMA SECUENCIAL
	for(i=0;i<EDADESSIZE;i++)
	{
		if(utn_getNumero(&edad,"Ingrese su edad\n","Esta no va\n",1,120,2))
		{	// EN EDADES ESCRIBO EDAD EN LA POSICION "i"
			edades[i]=edad; // guardo edad en el casillero "i"
		}
		else
		{
			printf("Sonaste no tenes idea lo que es una edad\n");
		}
	}
	// RECORRO PARA IMPRIMIR
	for(i=0;i<EDADESSIZE;i++)
	{
		printf("%d ",edades[i]);
	}

	//PRIMERA PARTE
	/*int edad;
	int respondioBien;

	respondioBien = utn_getNumero(&edad,"Ingrese edad:","Esta edad no va\n",1,120,3);
	if(respondioBien == 0)
	{
		printf("Ingresaste edad:%d\n",edad);
	}
	else
	{
		printf("No tenes idea lo que es una edad\n");
	}*/

	return EXIT_SUCCESS;
	// ARRAY
	// int numeros[4]; SINTAXIS DEL ARRAY
	// numeros[1]=5; posicion y valor
	// posicion = indice, son la posicion desde donde comienza el array y se empiezan a enumerar desde 0
	// int = E;
	// E = numeros[1]; vale 5

	// Como pasar los arrays como Argumentos
}
// PRIMERA PARTE
// devuelve un 0 si se pudo ingresar el valor correctamente

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

}
