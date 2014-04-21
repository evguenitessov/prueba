/*
 ============================================================================
 Name        : PruebaTestUnitario.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/TestRun.h>

int suma(int x, int y);

int main(void)
{
	printf("La suma de 2 y 3 es: %d", suma(2, 3));

	return EXIT_SUCCESS;
}

int suma(int x, int y)
{
	return (x + y);
}



