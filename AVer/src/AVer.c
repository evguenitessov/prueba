/*
 ============================================================================
 Name        : AVer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a, b, suma, resta;

	printf("ingrese numero (angel): "); // ingreso el numero (angel)
	scanf("%d", &a);

	printf("ingrese numero (beer): "); // ingreso el numero (beer)
	scanf("%d", &b);

	suma = a + b;
	resta = a - b;

	printf("a (decimal) = %d\n", a);
	printf("a (octal)   = 0%o\n", a);
	printf("a (hexa)    = 0x%04x\n", a);
	printf("\n");

	printf("b (decimal) = %d\n", b);
	printf("b (octal)   = 0%o\n", b);
	printf("b (hexa)    = 0x%04x\n", b);
	printf("\n");

	printf("suma (decimal) = %d\n", suma);
	printf("suma (octal)   = 0%o\n", suma);
	printf("suma (hexa)    = 0x%04x\n", suma);
	printf("\n");

	printf("resta (decimal) = %d\n", resta);
	printf("resta (octal)   = 0%o\n", resta);
	printf("resta (hexa)    = 0x%04x\n", resta);

	return EXIT_SUCCESS;
}
