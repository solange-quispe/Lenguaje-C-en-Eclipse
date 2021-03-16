/*
 * utn.c
 *
 *  Created on: 27 sept. 2020
 *      Author: Pescar
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <time.h>

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

char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
	if(iniciar)
		srand (time(NULL));
	return desde + (rand() % (hasta + 1 - desde));
}


