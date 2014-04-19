/*
 ============================================================================
 Name        : Ej_6_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void apuntarAVector(int *pVectEnteros[10], int vectEnteros[10]);
void llenarVector(int pVectEnteros[10]);
void funcionSumaVectorPunteros(int *pVectEnteros[10], int *suma);

int main(void)
{
	int *pVectEnteros[10], vectEnteros[10], suma = 0, *pSuma;

	pSuma = &suma;

	apuntarAVector(pVectEnteros, vectEnteros);
	llenarVector(vectEnteros);
	funcionSumaVectorPunteros(pVectEnteros, pSuma);

	return EXIT_SUCCESS;
}

void apuntarAVector(int* pVectEnteros[10], int vectEnteros[10])
{
	int i;

	for (i = 0; i < 10; i++)
		pVectEnteros[i] = &vectEnteros[i];
}

void llenarVector(int vectEnteros[10])
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("Ingrese el elemento %d del vector: \n", i);
		scanf("%d", &vectEnteros[i]);
	}
}

void funcionSumaVectorPunteros(int *pVectEnteros[10], int *suma)
{
	int i;

	for (i = 0; i < 10; i++)
		*suma += *pVectEnteros[i];

	printf("Dir				Valor \n");

	for (i = 0; i < 10; ++i)
		printf("%p			%d \n", pVectEnteros[i], *pVectEnteros[i]);

	printf("\n");
	printf("%p			%d \n", suma, *suma);

}
