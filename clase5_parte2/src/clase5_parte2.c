/*
 ============================================================================
 Name        : clase5_parte2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define EDADESSIZE 5
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo,int reintentos);
void imprimirArray(int listaDeEdades[],int len); // PROTOTIPO
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int i;
		int edad;
		// LOS ARRAYS LOS DEFINO EN PLURAL
		int edades[EDADESSIZE];
		// RECORRO PARA CARGAR EN FORMA SECUENCIAL
		for(i=0;i<EDADESSIZE;i++)
		{
			if(utn_getNumero(&edad,"Ingrese su edad","Esta no va\n",1,120,2))
			{	// EN EDADES ESCRIBO EDAD EN LA POSICION "i"
				edades[i]=edad; // guardo edad en el casillero "i"
			}
			else
			{
				printf("Sonaste no tenes idea lo que es una edad\n");
			}
		}
		// RECORRO PARA IMPRIMIR
		/*for(i=0;i<EDADESSIZE;i++)
		{
			printf("%d ",edades[i]);
		}*/
		// void imprimirArray(int array[]) // corresponde a ese
		//imprimirArray(edades);

		// COMO HAGO PARA ESCRIBIR DESDE AFUERA.ASI!
		edad = 8;
		imprimirArray(&edad); // pasaje por referencia,
		//en donde yo paso la direccion de una variable que esta afuera
		// le tengo que pasar la direccion de la variable
		// RECORRO PARA IMPRIMIR
		imprimirArray(edades,EDADESSIZE);

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

// EL NOMBRE DEL ARRAY ES LA DIRECCION DE MEMORIA DONDE COMIENZA EL ARRAY
// UN ARRAY NO DEJA DE SER UNA DIRECCION DE MEMORIA
// AL RECIBIR UN ARRAY, TAMBIEN SE RECIBE SU TAMAÑO
}
// Cuando recibimos un array, siempre es por referencia
// SOLO NECESITO LEER EL ARRAY
/*void imprimirArray(int array[])
{
	int e;
	array[3] = 8; // puedo escribir. Lo que yo modifico en el array se esta modificando en el array de afuera
	e = array[2] + 7; // puedo leer, y siempre voy a hacer referencia al array que tengo afuera
}*/

// PASAJE POR VALOR	// imprimirArray(&edad);

/*void imprimirArray(int e) // AMBAS SON  VALIDAS
{
	int j;
	e = 9; // LEO O ESCRIBO EL VALOR
}*/
// COMO HAGO PARA ESCRIBIR DE AFUERA, para eso necesito un puntero
// en int*/ *e
void imprimirArray(int* e)
// void imprimirArray(int e) // AMBAS SON  VALIDAS
{
	int j;
	*e = 9; // LEO O ESCRIBO EL VALOR
}
void imprimirArray(int e)
// void imprimirArray(int e) // AMBAS SON  VALIDAS
{
	int j;
	e = 9; // no puedo escribir la variable de afuera
	j = e + 7; // pero si podria hacer esto. Leer el valor
			// es lo unico que puedo hacer
}
// RECIBIR ARRAY POR REFERENCIA, no se hace copia en el mismo
void imprimirArray(int array[])
// void imprimirArray(int edades) // AMBAS SON  VALIDAS
{
	int j;
	array[2] = 3; // ESCRIBIR
	j = array[3] + 7; // LEER
}

// PASAJE POR VALOR		// imprimirArray(edad);
void imprimirArray(int listaDeEdades[],int len) // PROTOTIPO
{	// no se hace una copia, es el mismo
	int i;
	//int listaDeEdades[2] = 3; // escribir
	//j = listaDeEdades[3] + 7; // leer
	for(i=0;i<len;i++)
			{
				printf("%d ",listaDeEdades[i]);
			}
}

