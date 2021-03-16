/*
 ============================================================================
 Name        : clase4_bibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

int edad;
int peso;
char letra;
// ACA VOY A RETORNAR LO QUE LA FUNCION ME PUDO RETORNAR
int respuesta;

respuesta = utn_getCaracter(&letra,"Letra\n","ERROR!! La letra debe ser entre A y J\n",'A','J',2);
if(respuesta == 0)
{
	printf("\nLa letra es: %c",letra);
}
else
{
	printf("\nERROR!!");
}

// RESPUESTA VA SER IGUAL A LO QUE LA FUNCION ME DEVUELVA
respuesta = utn_getNumero(&edad,"Edad\n","ERROR!! La edad debe ser entre 0 y 199\n",0,199,2);
// SI ME DEVUELVE 0 QUIERE DECIR QUE ESTA TODO BIEN, OBTUVO LA EDAD
if(respuesta == 0)
{
	printf("\nSu edad es: %d",edad);
}
// SI NO PUDO OBTENER LA EDAD IMPRIMIRE UN ERROR ACA
else
{
	printf("\nERROR!!");
}
respuesta = utn_getNumero(&peso,"Peso\n","ERROR!! Su peso debe ser entre 0 y 500\n",0,500,3);
if(respuesta == 0)
{
	printf("\nSu peso es: %d",peso);
}
else
{
	printf("\nERROR!!");
}

	return EXIT_SUCCESS;
}
