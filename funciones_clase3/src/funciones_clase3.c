/*
 ============================================================================
 Name        : funciones_clase3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// PROTOTIPOS DE FUNCIONES
int sumarConLimite(int operador1,int operador2); // tiene que terminar con punto y coma sino no va a funcionar

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int numero1;
	int numero2;
	int suma;

	printf("Ingrese un numero: ");
	scanf("%d",&numero1);
	printf("Ingrese otro numero: ");
	scanf("%d",&numero2);

	suma = sumarConLimite(numero1,numero2);
	printf("La suma es: %d",suma);

	return EXIT_SUCCESS;
}

// Funciones auxiliares de mi programa
// Definicionb de la funcion sumarConLimite

// TIPO NOMBRE FUNCION (voil) // si no hay argumentos
// TIPO NOMBRE FUNCION (TIPO NOMBRE ARGUMENTO,...)
int sumarConLimite (int operador1, int operador2) // PROTOTIPO
{
	// VARIABLE LOCAL DE LA FUNCION
	int resultado; // se puede definir una variable adentro de mi funcion
	// operador1 = 33 // ej
	// operador2 = 27 // ej
	// suma = 60;
	// CODIGO DE MI FUNCION
	resultado=operador1+operador2;
	if(resultado>100)
	{
		resultado=100;
	}
	// RETORNAR VALOR
	return resultado; // ACA TERMINA MI FUNCION!...
}
