/*
 ============================================================================
 Name        : menu.c
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
	int opcion;
	int respuesta;
	do
	{
		respuesta = utn_getNumero(&opcion,"Seleccione una opcion\n\n-1-Leer\n2-Mostrar\n3-Salir\n","No es una opcion valida\n",1,3,2);
		if(respuesta == 0)
		{
			switch(opcion)
			{
			case 1:
				printf("Entre al caso 1\n");
				break;
			case 2:
				printf("Entre al caso 2\n");
				break;
			}
		}
	}while(opcion != 3);

	return EXIT_SUCCESS;
}
