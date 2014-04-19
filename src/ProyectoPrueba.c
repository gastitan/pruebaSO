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

int main(void) {
	saludar("Gastitan");
	return 0;
}

void saludar(char* nombre)
{
	printf("Hola %s", nombre);
}
