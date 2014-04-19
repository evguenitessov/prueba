/*
 ============================================================================
 Name        : Ej_2_36.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//double distancia(double x, double y);
int calcularPuntaje(double distancia);

int main(void)
{
	double x, y;

	printf("Ingrese las coordenadas del tiro: \n");
	scanf("%lf %lf", &x, &y);

	//calcularPuntaje(distancia(x, y));

	//printf("Su puntaje es: %d", calcularPuntaje(distancia(x, y)));

	return EXIT_SUCCESS;
}

/*double distancia(double x, double y)
{
	double d;
	//d = sqrt(pow(x, 2) + pow(y, 2));

	return d;
}*/

int calcularPuntaje(double dist)
{
	int puntaje;

	if ((dist >= 0.0) && (dist <= 1.0))
		puntaje = 10;
	else if ((dist > 1.0) && (dist <= 5.0))
		puntaje = 5;
	else if ((dist > 5.0) && (dist <= 10.0))
		puntaje = 1;
	else
		puntaje = 0;

	return puntaje;
}
