/*
 ============================================================================
 Name        : Ej_2_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../CalculosTemperaturas.h"
#include <time.h>

void mostrarTemperatura(int celsius);

int main(void) {
	int celsius;
	time_t t;

	time(&t);
	printf("%s", ctime(&t));


	printf("Ingrese un valor en grados Celsius: ");
	scanf("%d", &celsius);
	getchar();

	mostrarTemperatura(celsius);

	getchar();
	return EXIT_SUCCESS;
}

void mostrarTemperatura(int celsius)
{
	printf("Grados en Celsuis = %d, en Kelvin = %d y en Fahrenheit = %d", celsius, gradosKelvin(celsius),
			gradosFahrenheit(celsius));
}
