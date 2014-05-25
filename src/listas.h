/*
 * listas.h
 *
 *  Created on: 18/05/2014
 *      Author: utnso
 */

#ifndef LISTAS_H_
#define LISTAS_H_

#include "commons/list.h"

typedef struct {
	char *name;
	unsigned char age;
} t_person;

t_person *crear_persona(char *name, int age);
void test_list_iterate();

#endif /* LISTAS_H_ */
