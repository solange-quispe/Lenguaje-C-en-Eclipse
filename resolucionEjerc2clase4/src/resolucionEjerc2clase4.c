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
/*Diseñar un programa para jugar a adivinar un número entre 0 y 100. El juego
tiene que dar pistas de si el número introducido por el jugador está por encima
o por debajo. El juego termina cuando se adivina el número o se decide terminar
de jugar ingresando un número negativo. Permitir jugar tantas veces como lo desee
el jugador y al salir mostrar su mejor puntuación. Utilizar la biblioteca del
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
