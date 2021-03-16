/*
 ============================================================================
 Name        : tp2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define QTY_EMPLEADOS 1000
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;

	int opcion;
	int respuesta;

		do
		{
			respuesta = utn_getNumero(&opcion,"Seleccione una opcion\n\n-1-ALTAS\n2-MODIFICAR\n3-BAJA\n4-INFORMAR\n5-SALIR\n","No es una opcion valida\n",1,1000,2);
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
				case 3:
					printf("Entre al caso 1\n");
					break;
				case 4:
					printf("Entre al caso 2\n");
					break;
				}
			}
		}while(opcion != 5);

	return EXIT_SUCCESS;
}
