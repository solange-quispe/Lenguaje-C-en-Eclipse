/*
 ============================================================================
 Name        : punteros_parte2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// si yo no digo que la variable "int* direccionDeVariableDeRetorno" es de ese tipo de dato
// que no es lo mismo que un "int" no me deja aplicar esa sintaxis
										// esto me tiene que coincidir con el
										//tipo de dato a donde esta apuntando,
										// es decir que va "float *"
int dividir(int operador1, int operador2, float* direccionDeVariableDeRetorno);

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int a = 27;
	int b = 2;
	float resultado;
	int resultadoHuboError;


	printf("La direccion de resultado en el main es: %d\n",&resultado);

	// EL ARGUMENTO 3 SERIA UN PUNTERO, me esta guardando la direccion de memoria de la variable resultado
	resultadoHuboError = dividir(a,b,&resultado);

	if(resultadoHuboError == 1)
	{
		printf("No se puede dividir");
	}
	else
	{
		printf("\nResultado: %f",resultado);
	}

	return EXIT_SUCCESS;
}
// LA DIRECCION DE MEMORIA ES UN NUMERO
										// va un "float *"
int dividir(int operador1, int operador2, float* direccionDeVariableDeRetorno)
{
	// aca tambien va un "float"
	float resul;
	int huboError;

	printf("La direccion de resultado en funcion dividir es: %d",direccionDeVariableDeRetorno);

	if(operador2 != 0)
	{
		resul = (float)operador1 / operador2;
		// escribir en la direccion direccionDeVariableDeRetorno el resultado de la division "RESUL"
		// HACER (ni idea como)

		// escribir en la memoria esto (direccionDeVariableDeRetorno,resul);
		// le tengo que decir que agarre esa variable que tiene una direccion de memoria y aceda al contenido,
		// para eso le tengo que poner un asterisco * previamente a la variable.
		// Entonces ahora si le puedo escribir el valor y el valor no va a ir a parar como antes a la variable
		// sino que va a ir a parar a la direccion de la variable y ahi escribe lo que yo le pongo del lado derecho

		(*direccionDeVariableDeRetorno) = resul;

		huboError = 0; // NO HUBO ERROR

	}
	else
	{
		huboError = 1; // HUBO ERROR
	}
	return huboError;
}
