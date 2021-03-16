/*
 ============================================================================
 Name        : Clase1.c
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
	// el programa arranca por aca
	//console.log("Hola");
	//alert("Hola");
	//document.write("Hola");

	//printf("Hola mundo ya es hora del recreo");

	//TIPO NOMBRE;
	// TIPO NOMBRE=VALOR;

	/*int i;
	i = 27;

	int j = 27;

	float pi  = 3.14;

	char letra = 'A';

	//JS
	//var i=27;
	// asi concatenaba antes
	// para el caso de un int usop %d y la variable va al final
	//alert("precio: "+i+" pesos");

	//printf ("Hola: "+i"); // NO SE PUEDE

	//modificador de formato: %d, %f, %c
	// %d = int
	// %f = float
	// %c = char
	printf("precio: %d pesos %d lalala %d",i,j,k);

	printf("precio:%f" ,pi);

	printf("letra:%c" ,letra);

	// con ctrl C + ctrl V podemos copiar todo el proyecto*/

	/*int numero;

		// JS
		// numero = prompt("Ingrese un numero");

		printf("Ingrese un numero: ");
		// funcion que espera el ingreso
		// numero = scanf(); // NO
		//scanf("%d",numero); // NO

		scanf("%d",&numero);

		printf("Ingresaste:%d",numero); */

		// pedir 2 numeros e imprimir la suma, la resta, la multiplicacion y la division

		int numero1;
		int numero2;
		int suma;

		printf("Ingrese un numero: ");
		scanf("%d",&numero1);
		printf("Ingrese otro numero: ");
		scanf("%d",&numero2);
		suma=numero1+numero2;
		printf("La suma es: %d",suma);

		// pedirle al usuario 5 numeros we imprimir el promedio
		// LEER TODO LO QUE TENGA QUE VER CON GIT
		// En EXTRAS hay un monton de ejercicios para practicar
		// Tener siempre preparada la clase
		// Leer Guias de Estilo tambien





	return EXIT_SUCCESS;
}
