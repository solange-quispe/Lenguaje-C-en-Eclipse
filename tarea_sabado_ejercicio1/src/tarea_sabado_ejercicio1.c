/*
 ============================================================================
 Name        : tarea_sabado_ejercicio1.c
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
	/*Ejercicio 01:
	Se pide una cantidad indeterminada de edades enteras,
	informar:
	el máximo ingresado
	el mínimo ingresado
	el promedio
	la cantidad de edades ingresadas*/

	int numero;
	// esto me sirve para poder interactuar con es usuario
	int bufferInt;
	int maximo;
	int minimo;
	float promedio;
	int acumulador = 0;
	int contador = 0;
	int flag = TRUE;
	char estadoCivil;

	do
	{
		printf("Ingrese un numero (\*888\*) Finaliza el ingreso: ");
		scanf("%d", &bufferInt);

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
				if(bufferInt > maximo)
				{
					maximo = bufferInt;
				}
				else
				{
				if(bufferInt < minimo)
				{
					minimo = bufferInt;
				}
			}

		}
		if(bufferInt != 888)
		{
			acumulador = acumulador + bufferInt;
			contador++;
		}

		/*Ejercicio 02:
		Al ejercicio anterior :
		Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
		ademas de informar lo anterior ....informar:
		la persona mas joven de las casadas
		a persona mas Vieja de las solteras
		de los estados civiles , cual fue el mas ingresado*/
		printf("\n Ingrese su estado civil:(")

	}
		// ESTA ES LA CONDICION PARA QUE SIGA ITERANDO
	// SERIA MIENTRAS NUMERO SERA DISTINTO A 888
	while(bufferInt != 888);
	promedio = acumulador / contador;

	printf("\n El valor minimo es: %d y el valor maximo es: %d",minimo,maximo);
	printf("\n El promedio es: %f",promedio);
	return EXIT_SUCCESS;
}
