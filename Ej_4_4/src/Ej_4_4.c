/*
 ============================================================================
 Name        : Ej_4_4.c
 Author      : Euge
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void palabraInversa(char palabra[4]);

int main(void)
{
	char palabra[4];

	printf("Ingrese una palabra: ");
	gets(palabra);

	palabraInversa(palabra);

	return EXIT_SUCCESS;
}

void palabraInversa(char palabra[4])
{
	int longitud, i, j = 0;
	char palabra2[4];

	longitud = strlen(palabra);

	for (i = longitud; i >= 0; i--)
	{
		palabra2[j] = palabra[i];
		j++;
	}

	printf("La palabra inversa es: %s", palabra2);
}
