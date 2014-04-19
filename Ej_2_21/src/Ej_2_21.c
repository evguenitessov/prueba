/*
 ============================================================================
 Name        : Ej_2_21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float temperaturaPromedio(int temperaturas[10]);
int maximaTemperatura(int temperaturas[10]);
int minimaTemperatura(int temperaturas[10]);
int cantidadVecesEnRango(int temperaturas[10]);
void vaciarVector(int temperaturas[10]);
void ingresoDeValores(int temperaturas[10]);
void mostrarInformacionSolicitada(int temperaturas[10]);

int main(void)
{
	int temperaturas[10];

	vaciarVector(temperaturas);
	ingresoDeValores(temperaturas);
	mostrarInformacionSolicitada(temperaturas);

	getchar();
	return EXIT_SUCCESS;
}

float temperaturaPromedio(int temperaturas[10])
{
	int i;
	float suma = 0.0, promedio = 0.0;

	for (i = 0; i < 10; i++)
		suma += temperaturas[i];

	promedio = suma / 10;

	return promedio;
}

int maximaTemperatura(int temperaturas[10])
{
	int i, max = temperaturas[0];

	for (i = 1; i < 10; i++)
		if (temperaturas[i] > max)
			max = temperaturas[i];

	return max;
}

int minimaTemperatura(int temperaturas[10])
{
	int i, min = temperaturas[0];

	for (i = 1; i < 10; i++)
		if (temperaturas[i] < min)
			min = temperaturas[i];

	return min;
}

int cantidadVecesEnRango(int temperaturas[10])
{
	int i, cantVeces = 0;

	for (i = 0; i < 10; i++)
		if ((temperaturas[i] >= 20) && (temperaturas[i] <= 45))
			cantVeces++;

	return cantVeces;
}

void vaciarVector(int temperaturas[10])
{
	int i;

	for (i = 0; i < 10; i++)
		temperaturas[i] = 0;
}

void ingresoDeValores(int temperaturas[10]) {
	int i;

	printf("Ingrese 10 valores de temperaturas: \n");

	for (i = 0; i < 10; i++)
	{
		printf("Ingrese el valor %d: \n", i + 1);
		scanf("%d", &temperaturas[i]);
		getchar();
	}
}

void mostrarInformacionSolicitada(int temperaturas[10])
{
	printf("La temperatura promedio es: %.2f \n", temperaturaPromedio(temperaturas));
	printf("La temperatura maxima registrada es: %d \n", maximaTemperatura(temperaturas));
	printf("La temperatura minima registrada es: %d \n", minimaTemperatura(temperaturas));
	printf("La temperatura se encontro %d veces en el rango 20°C - 45°C \n", cantidadVecesEnRango(temperaturas));
}
