/*
 ============================================================================
 Name        : clase4_punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
// esto ya es una biblioteca, adentro tiene una pila de funciones y
// esas funciones estan en un solo lugar
// nuestra primera biblioteca se va a llamar UTN
// y una biblioteca esta formada por 2 archivos
// un archivo donde van los PROTOTIPOS-FIRMAS-CABECERAS y otro archivo donde van los DESARROLLOS DE LA FUNCION
// Desarrollo de la funcion = UTN.c
// Prototipo = UTN.h
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("\nNumero 1: ");
	scanf("%d",&numero1);
	printf("\nNumero 2: ");
	scanf("%d",&numero2);

	respuesta = dividir(&resultado,numero1,numero2);
	if(respuesta == 0)
	{
		printf("El resultado es: %f\n",resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}
	return EXIT_SUCCESS;
}
// con el asterisco* recibo la direccion de memoria de la variable
// esa es la manera que nosotros tenemos de habilitarle a otra funcion que pueda escribir en un espacio de memoria de nuestra funcion
// si la variable "respuesta" la creo el "main" y yo quiero que desde afuera se pueda escribir, se pueda escribir
// a la funcion que quiera que pueda escribir respuesta le tengo que pasar la direccion de memoria


// cada vez que recibo un puntero tengo que verificar que ese puntero sea distinto de NULL
// una variable tiene 2 cosas VALOR y DIRECCION DE MEMORIA nada mas
// si yo quiero la DIRECCION DE MEMORIA tengo que poner el &
// y cuando yo recibi la direccion de memoria si quiero escribir el VALOR, tengo que ponerle adelante el *
// escribir o leer solamente se puede con el *
