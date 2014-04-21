/*
 ============================================================================
 Name        : Ej_6_57.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void vaciarVector(int vec[4]);
void llenarVectorAleatorio(int vec[4]);
void mostrarVector(int vec[4]);
void separarNumero(int numero, int vec[4]);
int determinarCorrectas(int vec1[4], int vec2[4]);
int determinarRegulares(int vec1[4], int vec2[4]);
void jugar(int vec1[4], int vec2[4], int *cantidadIntentos);

int main(void)
{
	int hora, vec1[4], vec2[4], cantidadIntentos = 1;

	hora = time(NULL);
	srand(hora);

	vaciarVector(vec1);
	vaciarVector(vec2);
	llenarVectorAleatorio(vec1);
	mostrarVector(vec1);
	jugar(vec1, vec2, &cantidadIntentos);

	if (cantidadIntentos == 11)
		printf("\nUsted ha perdido.");

	return EXIT_SUCCESS;
}

void vaciarVector(int vec[4])
{
	int i;

	for (i = 0; i < 4; i++)
		vec[i] = 0;
}

void llenarVectorAleatorio(int vec[4])
{
	int numero;

	printf("\n\nIngrese un valor de 4 digitos: \n");
	scanf("%d", &numero);

	separarNumero(numero, vec);
}

void mostrarVector(int vec1[4])
{
	int i;

	printf("\n");
	for(i = 0; i < 4; i++)
		printf("%d	", vec1[i]);
}

void separarNumero(int numero, int vec[4])
{
	vec[3] = numero%10;
	vec[2] = (numero%100-numero%10)/10;
	vec[1] = (numero%1000-numero%100)/100;
	vec[0] = (numero%10000-numero%1000)/1000;
}

int determinarCorrectas(int vec1[4], int vec2[4])
{
	int i, cantidadCorrectas = 0;

	for (i = 0; i < 4; i++)
		if (vec1[i] == vec2[i])
		{
			printf("\nEl numero %d esta en la posicion correcta.", vec1[i]);
			cantidadCorrectas++;
		}

	return cantidadCorrectas;
}

int determinarRegulares(int vec1[4], int vec2[4])
{
	int i, j, cantidadRegulares = 0;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if ((i != j) && (vec1[i] == vec2[j]))
			{
				printf("\nEl numero %d esta en la posicion incorrecta.", vec1[i]);
				cantidadRegulares++;
			}

	return cantidadRegulares;
}

void jugar(int vec1[4], int vec2[4], int *cantidadIntentos)
{
	int numero, cantidadCorrectas;

	while(*cantidadIntentos < 11)
	{
		printf("\n\nIngrese un valor de 4 digitos: \n");
		scanf("%d", &numero);

		separarNumero(numero, vec2);

		cantidadCorrectas = determinarCorrectas(vec1, vec2);

		printf("\nLa cantidad de correctas es: %d", cantidadCorrectas);
		printf("\nLa cantidad de regulares es: %d",	determinarRegulares(vec1, vec2));

		if (cantidadCorrectas == 4)
		{
			printf("\nUsted adivinó el numero!!!");
			break;
		}

		(*cantidadIntentos)++;
	}
}
