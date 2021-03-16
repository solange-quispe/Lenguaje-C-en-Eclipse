/*
 ============================================================================
 Name        : clase3_ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// PROTOTIPOS DE FUNCIONES
int sumar (int operador1,int operador2);
int restar (int operador1,int operador2);
int multiplicar (int operador1,int operador2);
float dividir (int operador1,int operador2);

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!
	// EJERCICIO 1
	// 1 programa que pida un numero al usuario, despues que pida una operacion ( + - / * )
	// y despues que pida otro numero. Segun la operacion ingresada, se llamara a una funcion
	// que ejecute la operacion (sumar () restar () multiplicar () dividir ())
	// y luego mostrar el resultado al usuario
	// el mostrar resultado no puede estar dentro de
	// las funciones que crean para hacer la operacion

	int numero1;
	int numero2;
	char operacion;
	int resultadoInt;
	float resultadoFloat;

	printf("Ingrese un numero:\n");
	fflush(stdin);
	scanf("%d",&numero1);

	printf("Ingrese una operacion [ +, -, *, / ]:\n");
	fflush(stdin);
	scanf("%c",&operacion);

	printf("Ingrese otro numero:\n");
	fflush(stdin);
	scanf("%d",&numero2);

	switch(operacion) // shift + tab, para contraidentar
			{
				case '+':
					resultadoInt = sumar(numero1,numero2);
					break;
				case '-':
					resultadoInt = restar(numero1,numero2);
					break;
				case '*':
					resultadoInt = multiplicar(numero1,numero2);
					break;
				case '/':
					resultadoFloat = dividir(numero1,numero2);
					break;
				}

	if(operacion !='/')
	{
		printf("\n El resultado es: %d ",resultadoInt);
	}
	else
	{
		printf("\n El resultado es: %f ",resultadoFloat);
	}


	return EXIT_SUCCESS;
}

int sumar (int operador1,int operador2) // VA SIN PUNTO Y COMA
	{
		int resultado;
		resultado = operador1 + operador2;
		return resultado;
	}

int restar (int operador1,int operador2) // VA SIN PUNTO Y COMA
	{
		int resultado;
		resultado = operador1 - operador2;
		return resultado;
	}

int multiplicar (int operador1,int operador2) // VA SIN PUNTO Y COMA
	{
		int resultado;
		resultado = operador1 * operador2;
		return resultado;
	}

float dividir (int operador1,int operador2) // VA SIN PUNTO Y COMA
	{
		float resultado;
		if(operador2 != 0)
		{
		resultado = (float)operador1 / operador2; // igual tengo CASTEAR lo porque los numeros son "int"
		}
		else
		{
			printf("ERROR!! No se puede dividir por cero\n");
			resultado = 0;
		}
		return resultado;
	}

// PUNTEROS


