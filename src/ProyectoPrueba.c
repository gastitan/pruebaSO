/*
 ============================================================================
 Name        : ProyectoPrueba.c
 Author      : GF
 Version     :
 Copyright   : GF
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ProyectoPrueba.h"

/*int main(void) {
	saludar("Gastitan");
	negarElSaludo("Grillo");
	aceptarElSaludo("grillo");
	return 0;
}*/

void saludar(char* nombre)
{
	printf("Hola %s", nombre);
}

void negarElSaludo(char* nombre)
{
	printf("%s vos debes guita y no te saludo",nombre);
}

void aceptarElSaludo(char* nombre)
{
	printf("Todos debemos plata %s", nombre);
}
