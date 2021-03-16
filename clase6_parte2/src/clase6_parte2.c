/*
 ============================================================================
 Name        : clase6_parte2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // SIEMPRE!!!
static int getInt(int* pResultado);
static int myGets(char* cadena, int longitud);
static int esNumerica(char* cadena);
static int myGets(char* cadena, int longitud);
int utn_getNumero(int* pResultado, char* mensaje, char mensajeError, int minimo, int maximo, int reintentos);

int main(void) {
	setbuf(stdout, NULL); // SIEMPRE!!

	int auxInt;
	//char nombre[11]="ZZZZZZZZ";
	//char apellido[11]="PEREZ";
	//char auxiliar[30]="";
	//char buffer[256];
	//int i;

	/*strcpy[nombre,"JUAN"];
	for(i=0;i<sizeof(nombre);i++)
	{
		printf("\nINDEX: %d - VALUE: %c - %d", i, nombre[i],(int)nombre[i]);
	}
	strncpy(auxiliar,nombre,sizeof(auxiliar));

	strncat(nombre,"LALALA",sizeof(nombre));

	snprintf(auxiliar,sizeof(auxiliar),"%s %s",nombre,apellido);

	printf("\n%s\n",auxiliar);

	printf("\nSIZE Nombre mide %d ----- auxiliar mide %d",sizeof(nombre),sizeof(auxiliar));
	printf("\nSTRLEN Nombre mide %d ----- auxiliar mide %d",strnlen(nombre),sizeof(nombre)),strnlen(auxiliar),sizeof(auxiliar);

	*/

	while(1)
	{
		if(utn_getNumero(&auxInt, "NUMERO\n","ERROR\n",-2,10,2) == 0)
		{
			printf("\nEl numero es %d", auxInt);
		}
	}
	return EXIT_SUCCESS;
}

/*
 * \brief
 * \parametro pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \return Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
 */
static int getInt(int* pResultado)
{
	int retorno= -1;
	char buffer[4096];
	//scanf("%s",buffer);
	//fflush(stdin);
	//scanf("%s",buffer); // voy a dejar de usar scanf y voy a pasar a usar mi funcion
	//voy a llamar a mi funcion que va a ser segura, que yo le voy a poder dar un limite y no se va a pasar
	//me va a leer lo que necesita de lo que el usuario ingresa y no cualquier cosa
	//le paso el buffer, el tamaño del que no quiero desbordar es decir el sizeof de buffer
	// si logro hacer todo lo que le mande a hacer me va a devolver un cero
	if(myGets(buffer,sizeof(buffer)) == 0 && esNumerica(buffer))
	{
		retorno = 0;
		// si mi funcion me devolvio 0 no es numerica, recien ahi paso al siguiente paso
		*pResultado = atoi(buffer); // con el "atoi" convierto un texto en un numero inter(seria como "parsearlo")
	}
	return retorno;
}

/*
 * \brief Lee de stdin hasta que encuentra un "\n" o hasta que haya copiado en cadena
 * 			un maximo de longitud - 1 caracteres.
 * \parametro pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \parametro longitud Define el tamaño de cadena
 * \return Retorna 1 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 */
static int myGets(char* cadena, int longitud) // ESTA FUNCION ES MAS SEGURA
{
	return -1;
}

/*
 * \brief Verifica si la cadena ingresada es numerica
 * \parametro cadena Cadena de caracteres a ser analizada
 * \return Retorna 1 (verdadero) si la cadena es numerica y 0 (falso) si no lo es
 */
static int esNumerica(char* cadena) // el "static" lo uso cuando yo no quiero que esa funcion sea utilizada desde afuera
{													// es decir, desde el "main"si yo quiero hacer que la funcion se utilice solamente dentro de este archivo puedo hacerla "privada"
													// para esto pongo la palabra "static" antes que todo y el PROTOTIPO de la funcion NO declaralo en el "utn.h"
													// sino declararlo en el "utn.c", de esta manera solo le da servicio a mi biblioteca
	int retorno = 1;
	int i = 0;

	if(cadena[0] == '-') // esto por si mi primer numero es un numero negativo
						// lo cual seria valido, pero solo por ser el primer numero
	{
		i = 1;
	}
	for( ; cadena[i] != '\0'; i++) // el for puede quedar vacio,
									// puede no es necesario usar las 3 partes
	{
		if(cadena[i] > '9' || cadena[i] < '0')
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}

/*
 * \brief Lee de stdin hasta que encuentra un "\n" o hasta que haya copiado en cadena
 * 		 un maximo de "longitud -1" caracteres
 * \parametro pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * \parametro longitud Define el tamaño de cadena
 * \return Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 */

static int myGets(char* cadena, int longitud) // SON FUNCIONES DE SERVICIO INTERNO
{
//char buffer[4096];
fflush(stdin);
//scanf("%s",buffer); // no es seguro, me deja un agujero de seguridad
//mejor usamos fgets, que nos permite leer de un archivo una cadena de caracteres
//leo del stdin una cadena de caracteres, el segundo parametro es la cantidad,
// entonces yo le puedo definir que cantidad de caracteres quiero leer como maximo(longitud)
//directamente lo voy a leer en "cadena" total esa no se puede desbordar
//esta funcion se llama fgets, es decir lee un archivo
fgets(cadena,longitud,stdin); // MANERA SEGURA, reemplaza al "scanf".
// uso esto para que no me tome el "enter" como dato
cadena[strlen(cadena)-1] = '\0';
/* h
   o
   l
   a
   ENTER Asi me dice que mide 5 caracteres
   \0    Toma al ENTER como dato
*/
//strncpy(cadena,buffer,longitud);
return 0;
}

/*
 * \brief Solicita un numero al usuario, luego de verificarlo devuelve el resultado
 * \parametro pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * \parametro mensaje Es el mensaje a ser mostrado
 * \parametro mensajeError Es el mensaje de Error a ser mostrado
 * \parametro minimo Es el numero minimo a ser aceptado
 * \parametro maximo Es el numero maximo a ser aceptado
 * \return Retorna 0 si se obtuvo el numero y -1 si no
 */

// ESTA FUNCION SI INTERACTUA CON EL CLIENTE (no es "estatica")
int utn_getNumero(int* pResultado, char* mensaje, char mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int buffer;

		if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
		{
			do
			{
				printf("%s",mensaje);
				//scanf("%d",&bufferInt); lo cambiamos por getInt
				// esta funcion ya me devuelve si salio mal o no
				// getInt viene a asegurarme que si me devuelve un 0 es porque obtuvo un entero
				// si no obtuvo un entero no me tiene que devolver un 0
				if(	getInt(&buffer) == 0 && buffer >= minimo && buffer <= maximo)
				{
					*pResultado = buffer;
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",mensajeError);
					reintentos--;
				}
			}while(reintentos >= 0);

		}
	return retorno;
}

