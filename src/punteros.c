/*
 * punteros.c
 *
 *  Created on: 23/04/2014
 *      Author: utnso
 */
#include "punteros.h"
#include <stdlib.h>
#include <stdio.h>

void crear_puntero1(void){
	int i = 1;
	int *p;

	printf("Antes i vale: %d\n", i);

	p = &i; //p apunta a i
	*p = 2; //se le asigna a donde este apuntando p (i) el valor 2
	printf("Ahora i vale: %d y el contenido de p vale: %d\n", i, *p);

}

void crear_puntero2(void)
{
	int *p = malloc(sizeof(int));
	*p = 1;
	printf("p = %d\n", *p);
	printf("&p = %p\n", &p);
	printf("*p = %p\n", p);

}
