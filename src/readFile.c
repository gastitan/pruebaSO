/*
 * readFile.c
 *
 *  Created on: 19/04/2014
 *      Author: utnso
 */

#include <stdio.h>

int main()
{
	int c;
	FILE *file;
	file = fopen("resources/test.txt", "r");
	if (file) {
	    while ((c = getc(file)) != EOF)
	        putchar(c);
	    fclose(file);
	}

	return 0;
}
