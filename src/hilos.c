/*
 * hilos.c
 *
 *  Created on: 23/04/2014
 *      Author: utnso
 */
#include <pthread.h>
#include <stdlib.h>
#include "saludos.h"
#include "hilos.h"

void disparar_un_hilo(void)
{
	pthread_t hilo;
	char* nom = "Gaston";
	//int t1;

	pthread_create (&hilo, NULL, (void *)saludar, (void *)nom);

}
