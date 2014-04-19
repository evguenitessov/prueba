/*
 ============================================================================
 Name        : Ej_2_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void exchange(int *a, int *b);

int main(void) {
	int a, b;

	printf("Ingrese 2 valores: \n");
	scanf("%d %d", &a, &b);
	getchar();

	printf("El valor de A es: %d, y el de B es: %d\n", a, b);

	exchange(&a, &b);

	printf("El valor de A es: %d, y el de B es: %d\n", a, b);
	getchar();

	return EXIT_SUCCESS;
}

void exchange(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
