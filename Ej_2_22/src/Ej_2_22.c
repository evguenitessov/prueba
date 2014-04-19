/*
 ============================================================================
 Name        : Ej_2_22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void realizarOperacion(float x, float y, char operacion);

int main(void)
{
	float x, y;
	char operacion;

	printf("Ingrese 2 valores y la operacion: \n");
	scanf("%f %f %c", &x, &y, &operacion);

	realizarOperacion(x, y, operacion);

	return EXIT_SUCCESS;
}

void realizarOperacion(float x, float y, char operacion)
{
	switch (operacion)
		{
			case '+':
				printf("x = %.2f, y = %.2f,  x + y = %.2f", x, y, x + y);
				break;
			case '-':
				printf("x = %.2f, y = %.2f,  x - y = %.2f", x, y, x - y);
				break;
			case '*':
				printf("x = %.2f, y = %.2f,  x * y = %.2f", x, y, x * y);
				break;
			case '/':
				printf("x = %.2f, y = %.2f,  x / y = %.2f", x, y, x / y);
				break;
			default:
				printf("Operacion NO valida!!!");
				break;
		}
}
