/*
 * listas.c
 *
 *  Created on: 18/05/2014
 *      Author: utnso
 */

#include "listas.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

t_person *ayudantes[5];
int init_suite() {
	ayudantes[0] = crear_persona("Matias", 24);
	ayudantes[1] = crear_persona("Gaston", 25);
	ayudantes[2] = crear_persona("Sebastian", 21);
	ayudantes[3] = crear_persona("Daniela", 19);
	ayudantes[4] = crear_persona("Facundo", 25);
	return 0;
}

t_person *crear_persona(char *name, int age)
{
	t_person *new = malloc( sizeof(t_person) );
	new->name = strdup(name);
	new->age = age;
	return new;
}

void persona_destroy(t_person *self){
	free(self->name);
	free(self);
}


void test_list_iterate() {

	init_suite();
	t_list * list = list_create();

	list_add(list, ayudantes[0]);
	list_add(list, ayudantes[1]);
	list_add(list, ayudantes[2]);
	list_add(list, ayudantes[3]);
	list_add(list, ayudantes[4]);

	int suma_edades = 0;

	void _list_elements(t_person *p)
	{
		suma_edades += p->age;
	}

	list_iterate(list, (void*) _list_elements);

	printf("Suma edades %d",suma_edades);

	list_destroy(list);
}
