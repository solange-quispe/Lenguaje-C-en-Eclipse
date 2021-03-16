/*
 ============================================================================
 Name        : Clase2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);
	//Pedir 5 numeros y dar como resultado maximo y minimo
	int maximo;
	int minimo;
	int i;
	int flag = TRUE;
	// para pedir un numero al usuario uso un bufferInt
	int bufferInt;

	for(i=0 ;i<5 ;i++){
		// barra invertida Alt Gr + tecla que esta debajo del Esc
	printf("Ingrese un numero %d\n",i+1);
	// scanf nos pide que digamos de que tipo es la variable, en este caso es una variable de tipo entera
	// no quiere recibir el contenido, el valor de la variable sino lo que quiere conseguir para poder
	// escribir en ella es la direccion de la memoria de la variable, entonces teniamos que usar la variable
	// que nos permitia de una variable cualquiera obtener la direccion de memoria, en este caso de bufferInt

	scanf("%d",bufferInt);
	if(flag == TRUE)
	//flag == 0; //no era necesario crear una bandera
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
	printf("\nEl valor minimo es: %d y el valor maximo es: %d",minimo,maximo);
	return EXIT_SUCCESS;

}
