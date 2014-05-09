/*
 * malloc.c
 *
 *  Created on: 01/05/2014
 *      Author: utnso
 */

#include <stdio.h>
#include <stdlib.h>
#include "malloc.h"

void prueba_malloc()
{
	int tamanio = 1;

	int *tt = malloc(tamanio);

	if(tt == NULL)
	{
		printf("No asigno nada");
		return;
	}

	*tt = 20000005;
	printf("%d", *tt);


	free(tt);
}
