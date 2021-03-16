/*
 ============================================================================
 Name        : burbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define QTY_EMPLEADOS 9 // esto va a depender de la cantidad de elementos quye tengo
						// puede ser mas, pero minimamente tiene que ser 9 elementos
int printArrayInt(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int arrayEdades[QTY_EMPLEADOS] = {54,26,93,17,77,31,44,55,27};
	int respuesta;
	//edades[0] = 34; // primera posicion 0
	//edades[4] = 34; // primera posicion 4
	// tengo que pasarle el NOMBRE y el LIMITE

	printArrayInt(arrayEdades,QTY_EMPLEADOS); // imprimimos el array
	respuesta = ordenarArrayInt(arrayEdades, QTY_EMPLEADOS); // llamamos a la funcion que ordena
	if(respuesta > 0)
	{
		printf("\n\n Iteraciones: %d\n\n",respuesta); // si salio todo bien imprimimos la cantidad de iteraciones
	}
	printArrayInt(arrayEdades,QTY_EMPLEADOS);

	return EXIT_SUCCESS;
}

// brief Imprime a modo DEBUG la informacion de un array de enteros
// parametro pArray Es el puntero al array a ser ordenado
// parametro sizeof Es la longitud del array
// return 0 si OK 0 -2 para indicar un ERROR

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
