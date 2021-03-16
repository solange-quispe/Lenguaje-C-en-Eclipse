/*
 * utn.c
 *
 *  Created on: 8 sept. 2020
 *      Author: Pescar
 */
#include <stdio.h>
#include <stdlib.h>
// aca tengo que incluir todas las bibliotecas que utilice
// cada vez que nosotros necesitemos obtener un numero entero la vamos a llamar
// no importa en que proyecto estemos, vamos a usar esta funcion
																			// el 2 serian los reintentos + el primer intento
// utn_getNumero1(&edad,"Edad\n","ERROR!! la edad debe ser entre 0 y 199\n",0,199,2);

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{




}

// como "resultado" es float el puntero tiene que ser un "puntero" a float, esa es la manera de recibir la direccion de memoria de "resultado"
int dividir (float* pResultado,int operador1, int operador2) // DESARROLLO DE LA FUNCION
{
	float resultado;
	// tengo que inicializar la variable retorno con un error
	int retorno = -1;
	// asi me corroboro que me hayan pasado una direccion de memoria
	// distinto de NULL me asegura que recibi una direccion de memoria cargado como "resultado"
	if(pResultado != NULL && operador2 != 0) // ESTO LO TENGO QUE HACER SIEMPRE!!
	{
		resultado = (float)operador1 / operador2;
		*pResultado = resultado;
		retorno = 0;
	}

	return retorno;
}
