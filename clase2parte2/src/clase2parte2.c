/*
 ============================================================================
 Name        : clase2parte2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);
	// Pedir numeros hasta que el usuario quiera y para eso tiene que ingresar el 888
	//(888) y dar como resultado maximo y minimo

	int maximo;
	int minimo;
	int bufferInt;
	int flag=TRUE;

	do{
		printf("Ingrese un numero (\"888\" Finaliza el ingreso): ");
		scanf("%d",&bufferInt);
		if(flag==TRUE)
		{
			maximo = bufferInt;
			minimo = bufferInt;
			flag = FALSE;
		}
		else
			{
			if(bufferInt > maximo)
			{
			maximo = bufferInt;
			}
			if(bufferInt < minimo)
			{
				minimo = bufferInt;
			}
		}
	}
	while(888 != bufferInt);

	printf("\nEl valor minimo es: %d y el valor maximo es: %d",minimo,maximo);*/

	// OTRA MANERA DE RESOLVER EL MISMO EJERCICIO

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);

	int maximo;
	int minimo;
	int bufferInt;
	int flag = TRUE;

	do
	{
		printf("Ingrese un numero (\*888\* Finaliza el ingreso): ");
		scanf("%d",&bufferInt);
		if(flag == TRUE)
		{
			maximo = bufferInt;
			minimo = bufferInt;
			flag = FALSE;
		}
		else
		{
			if(bufferInt == 888)
			{
				break;
			}
			else
			{
				if(bufferInt > maximo)
				{
					maximo = bufferInt;
				}
				if(bufferInt < minimo)
				{
					minimo = bufferInt;
				}
			}
		}
	}
	// NECESITO QUE SEA VERDADERO PARA QUE SIGA ITERANDO
	while(TRUE);

	printf("\nEl valor minimo es: %d y el valor maximo es: %d",minimo,maximo);
	return EXIT_SUCCESS;
}
