/*
 * utn.h
 *
 *  Created on: 29 sept. 2020
 *      Author: Pescar
 */

#ifndef UTN_H_
#define UTN_H_

float getFloat(char mensaje[]);
int getInt(char mensaje[]);
char getChar(char mensaje[]);
int printArrayInt(int* pArray, int limite);
int ordenarArrayInt(int* pArray, int limite);

int esNumerico(char str[]);
int esSoloLetras(char str[]);
int esAlfanumerico(char str[]);
int esTelefono(char str[]);


#endif /* UTN_H_ */
