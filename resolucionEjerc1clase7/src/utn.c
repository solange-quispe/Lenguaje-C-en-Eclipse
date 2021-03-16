/*
 * utn.c
 *
 *  Created on: 29 sept. 2020
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
