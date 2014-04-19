/*
 ============================================================================
 Name        : Ej_4_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strInver(char *c);

int main(void)
{
	char *c, vec1[5];

	printf("Ingrese una palabra: ");
	gets(vec1);

	c = vec1;
	strInver(c);

	return EXIT_SUCCESS;
}

void strInver(char *c)
{
	int i;
	char vec2[5];

	for (i = 3; i >= 0; i--)
		vec2[i] = *c++;

	for (i = 0; i <= 4; i++)
		printf("%c", vec2[i]);
}
