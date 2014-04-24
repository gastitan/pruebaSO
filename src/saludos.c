/*
 * saludos.c
 *
 *  Created on: 23/04/2014
 *      Author: utnso
 */
#include "saludos.h"
#include <stdio.h>

void saludar(char* nombre)
{
	printf("Hola %s \n", nombre);
}

void negarElSaludo(char* nombre)
{
	printf("%s vos debes guita y no te saludo \n",nombre);
}

void aceptarElSaludo(char* nombre)
{
	printf("Todos debemos plata %s \n", nombre);
}

