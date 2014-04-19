/*
 ============================================================================
 Name        : Ej_2_32.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumaRango(int a, int b);

int main(void)
{
	int a, b;

	printf("Ingrese los limites del rango: \n");
	scanf("%d %d", &a, &b);

	printf("La suma del rango es: %d", sumaRango(a, b));

	return EXIT_SUCCESS;
}

int sumaRango(int a, int b)
{
	int i, suma = 0;

	for (i = a; i <= b; i++)
		suma += i;

	return suma;

}
