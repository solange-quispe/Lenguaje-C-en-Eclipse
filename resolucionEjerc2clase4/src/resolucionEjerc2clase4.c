/*
 ============================================================================
 Name        : resolucionEjerc2clase4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
/*Dise�ar un programa para jugar a adivinar un n�mero entre 0 y 100. El juego
tiene que dar pistas de si el n�mero introducido por el jugador est� por encima
o por debajo. El juego termina cuando se adivina el n�mero o se decide terminar
de jugar ingresando un n�mero negativo. Permitir jugar tantas veces como lo desee
el jugador y al salir mostrar su mejor puntuaci�n. Utilizar la biblioteca del
ejercicio #001.*/

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int numeroOculto;
	int numeroIngresado;
	char teclaIngresada;
	int jugar;

	teclaIngresada = 's'; // seguir
	while(teclaIngresada == 's')
	{
		numeroOculto = getNumeroAleatorio(1,100,1);

		jugar = 1;
		while(jugar == 1)
		{
			numeroIngresado = getInt("Ingrese un numero entre(0 - 99)\n");
			// esto es por si porque si ingresaba un numero negativo salia
			if(numeroIngresado < 0)
			{
				jugar = 0;
			}
			else if(numeroIngresado == numeroOculto)
			{
				printf("FELICITACIONES GANASTE!!!\n");
				jugar = 0; // una vez que gano, sale del juego
			}
			else if(numeroIngresado > numeroOculto)
			{
				printf("EL NUMERO QUE INGRESASTE ES GRANDE!!!\n");
			}
			else if(numeroIngresado < numeroOculto)
			{
				printf("EL NUMERO QUE INGRESASTE ES CHICO!!!\n");
			}
		}

		teclaIngresada = getChar("Desea jugar nuevamente?? (s/n)\n");
	}
	return 0;
}
