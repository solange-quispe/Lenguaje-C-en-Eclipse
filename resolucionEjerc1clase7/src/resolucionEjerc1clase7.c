/*
 ============================================================================
 Name        : resolucionEjerc1clase7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "utn.h"
/*Escribir la funci�n calcularMayor(), la misma debe recibir dos n�meros enteros
y devolver por referencia(en la direccion de la variable), el numero mayor. Deber� retornar un 1 s� encontr� un
mayor, o un 0 si ambos n�meros son iguales.*/
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int numero1;
	int numero2;
	int calcularMayor;
	int resultado;

	// Pedir 2 numeros al usuario con utn_getNumero() y guardarlos
	// en numero1 y numero2

	numero1 = utn_getInt("Ingrese un numero: \n");
	numero2 = utn_getInt("Ingrese otro numero: \n");
	// Luego llamo a la funcion calcularMayor()
	if(calcularMayor(&resultado,numero1,numero2) == 0) // si me da cero es porque los numeros son iguales
	{
		printf("Los numeros son iguales\n");
	}
	else
	{
		printf("el mayor es: %d\n",resultado);
	}
	return EXIT_SUCCESS;
}

int calcularMayor(int* pResultado, int num1, int num2)
{
	int retorno = -1; // error

	if(pResultado != NULL) // valida puntero
	{
		if(num1 == num2)
		{
			retorno = 0; // falso
		}
		else
		{
			if(num1 > num2)
			{
				*pResultado = num1;
			}
			else
			{
				*pResultado = num2;
			}
			retorno = 1; // verdadero
		}
	}
	return retorno;
}
