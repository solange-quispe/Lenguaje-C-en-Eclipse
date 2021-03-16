/*
 ============================================================================
 Name        : tp1_nuevo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// PROTOTIPO DE FUNCIONES
int sumar(int operador1,int operador2); // utn.h
int restar(int operador1,int operador2); // utn.h
int multiplicar(int operador1,int operador2); // utn.h
int dividir(float operador1,int operador2,float* pResultado); // utn.h

	int main(void) {
		setbuf(stdout, NULL); // SIEMPRE!!

		int opcion;
		int numero1;
		int numero2;
		//int resultadoInt;
		float resultadoFloat;

	do{
			printf("1-Sumar\n"
					"2-Restar\n"
					"3-Multiplicar\n"
					"4-Dividir\n"
					"5-Salir\n");

			printf("Elija una opcion:\n ");
			fflush(stdin);
			scanf("%d",&opcion);

			printf("Ingrese un numero:\n ");
			fflush(stdin);
			scanf("%d",&numero1);

			printf("Ingrese otro numero:\n ");
			fflush(stdin);
			scanf("%d",&numero2);

			switch(opcion)
			{
			case 1:
				resultadoFloat = sumar(numero1,numero2);
				break;
			case 2:
				resultadoFloat = restar(numero1,numero2);
				break;
			case 3:
				resultadoFloat = multiplicar(numero1,numero2);
				break;
			case 4:
				resultadoFloat = dividir(numero1,numero2,&resultadoFloat);
				break;

			}

			printf("El resultado es: %f\n",resultadoFloat);

		}while(opcion != 5);

		return EXIT_SUCCESS;
	}

	// TIPO NOMBRE FUNCION (TIPO NOMBRE ARGUMENTO=VARIABLES)
	int sumar(int operador1,int operador2) // PROTOTIPO
	{	// CODIGO DE MI FUNCION
		int resultado;

		resultado = operador1 + operador2;

		return resultado;
	}

	int restar(int operador1,int operador2) // PROTOTIPO
	{	// CODIGO DE MI FUNCION
		int resultado;

		resultado = operador1 - operador2;

		return resultado;
	}

	int multiplicar(int operador1,int operador2) // PROTOTIPO
	{	// CODIGO DE MI FUNCION
		int resultado;

		resultado = operador1 * operador2;

		return resultado;
	}
	int dividir(float operador1,int operador2,float* pResultado) // PROTOTIPO
	{	// CODIGO DE MI FUNCION
		float resultado;
		int retorno = -1; //ERROR!

		if(pResultado != NULL && operador2 != 0)
		{
			resultado = operador1 / operador2;
			*pResultado = resultado;
			retorno = 0; // NO HUBO ERROR
		}

		return retorno;
	}
