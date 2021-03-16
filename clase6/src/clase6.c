/*
 ============================================================================
 Name        : clase6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // SIEMPRE!!
// el nombre de un array es la direccion de variable de otro elemento
// strcpy = string copy, me copia un array en otro
int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	char nombre[11]="JUAN"; // LO PUEDO INICIALIZAR ASI, pero no lo puedo seguir usando despues
	char auxiliar[30];
	char buffer[256];
	// strcty, con esa funcion puedo alterar el contenido de esa variable
	//strcpy(nombre,"MARIA"); // me copia "Maria" adentro del array nombre
	//strcpy(auxiliar,nombre); // asi copio en "auxiliar" el contenido de nombre
								// recibe 2 parametros, el destino y el origen
	strncpy(auxiliar,nombre,sizeof(auxiliar)); //le puedo decir que se limite a copiar el sizeof que me va a decir cuanto mide auxiliar
												// esta funcion me pasa directamente cuanto mide "auxiliar"
	//strnlen(auxiliar,sizeof(auxiliar)); strlen me devuelve el tamaño ocupado por el texto que tiene adentro
										// strnlen lo que hace es busca un \0 pero por las dudas se va fijando de no pasarse del tamaño maximo que yo le digo que tiene el array
	// para un strncpy seguro me sirve como limite, nunca me voy a desbordar, nunca voy a terminar
	//escribiendo el espacio de memoria de otra variable
	strncpy(auxiliar,nombre,sizeof(auxiliar)); // VERSION SEGURA!

	strncat(nombre,"Lalala",sizeof(nombre)); //con esta funcion puedo concatenar
	//sprintf(auxiliar, "MI SIZE OF ES %d ",sizeof(auxiliar)); // podemos componer ahi adentro lo que se nos ocurra
	//sprintf(buffer,"MI SIZE OF ES %d ",32627); // este es mejoir!
	snprintf(auxiliar,sizeof(auxiliar),"MI SIZE OF ES %d ",32627); // FORMA SEGURA DE COPIAR
	//strncpy(auxiliar,buffer,sizeof(auxiliar));

	printf("\n%s\n",auxiliar);
// este printf me devuelve el tamaño fisico en bytes de esa variable
	//printf("Nombre mide %d -------- auxiliar mide %d",sizeof(nombre),sizeof(auxiliar));
	printf("\nSIZE Nombre mide %d ----- auxiliar mide %d",sizeof(nombre),sizeof(auxiliar));
	printf("\nSTRLEN Nombre mide %d ----- auxiliar mide %d",strnlen(nombre),sizeof(nombre)),strnlen(auxiliar),sizeof(auxiliar);
	// strnlen deberia dar 4 y auxiliar tambien porque mide el largo del string
	return EXIT_SUCCESS;
}
