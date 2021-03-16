/*
 ============================================================================
 Name        : clase3_punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	// PUNTEROS: Direcciones de memoria; las direcciones son numeros enteros
	// direcciones variablkes / valores de las variables
	int a;
	int b;
	int c;
	char o;
	float f;
	unsigned int direccion; // las direcciones no son negativas

	a = 27;
	b = 33;
	c = 8;

	// esto me devuelve la cantidad de bytes que ocupa la variable
	// asi averiguo el tamaño de un "int"
	printf("El size de A es: %d\n",sizeof(a));
	// asi averiguo el tamaño de un "char"
	printf("El size de O es: %d\n",sizeof(o)); // en el caso del "char" no cambio el %d por %c, porque estoy imprimiendo el valor de la funcion no de la variable
	// asi averiguo el tamaño de un "float"
	printf("El size de F es: %d\n",sizeof(f));

	direccion = &a;

	// si pongo %p me imprime en hexadecimales, es mucho mas comodo para poder expresar numeros grandes
	printf("La direccion de A es: %d\n",&a);
	printf("La direccion de A es: %d\n",direccion);

	printf("La direccion de B es: %d\n",&b);

	return EXIT_SUCCESS;
}
