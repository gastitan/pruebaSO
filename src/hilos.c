/*
 * hilos.c
 *
 *  Created on: 23/04/2014
 *      Author: utnso
 */
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include "saludos.h"
#include "hilos.h"
#include <unistd.h>

void hilo_loco(void);
void hilo_mas_loco(void);

int tomado = 0;

void disparar_un_hilo(void)
{
	pthread_t hilo1, hilo2;
	char* nom = "Gaston";
	//int t1;

	pthread_create (&hilo1, NULL, (void *)hilo_loco, (void *)nom);
	pthread_create (&hilo2, NULL, (void *)hilo_loco, (void *)nom);

	pthread_join(hilo1,NULL);
	pthread_join(hilo2,NULL);

}

void hilo_loco(void)
{
	if(tomado == 1)
		return;

	tomado = 1;
	int tid = pthread_self();
	int x = 0;
	while(1==1)
	{
//		printf("Hilo 1\n");
		printf("Proceso: %d \n", tid);
		sleep(1);
		if(x==3)
		{
			pthread_exit(NULL);
			tomado = 0;
		}
		x++;
	}
}
void hilo_mas_loco(void)
{
	int x = 0;
	int tid = pthread_self();
	while(1==1)
	{
		printf("Hilo 2\n");
		printf("Proceso: %d \n", tid);
		printf("##########################################\n");
		x++;
		sleep(2);
//		if(x==5)
//			pthread_exit(NULL);
	}
}
