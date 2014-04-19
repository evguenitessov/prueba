/*
 ============================================================================
 Name        : Ej_2_14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;

	printf("Ingrese 2 valores: ");
	scanf("%d %d", &x, &y);
	getchar();

	if ((x - y) < 0) {
		printf("La diferencia es negativa.");
	} else {
		printf("La diferencia es positiva.");
	}

	return EXIT_SUCCESS;
}
