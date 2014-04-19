/*
 ============================================================================
 Name        : Ej_6_47.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define DIMX 3
#define DIMY 3

void llenarMatriz(int mat[DIMX][DIMY], int n, int m);
int matrizSimetrica(int mat[DIMX][DIMY], int n, int m);

int main(void)
{
	int mat[DIMX][DIMY], n = 3, m = 3;

	llenarMatriz(mat, n, m);

	if (matrizSimetrica(mat, n, m) != 0)
		printf("La matriz ES simetrica");
	else
		printf("La matriz NO ES simetrica");

	return EXIT_SUCCESS;
}

int matrizSimetrica(int mat[DIMX][DIMY], int n, int m)
{
	int i, j, esSimetrica;

	if (n == m)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				if (i != j)
				{
					if (mat[i][j] == mat[j][i])
						esSimetrica = 1;
					else
						esSimetrica = 0;
				}
	}
	else
		esSimetrica = 0;

	return esSimetrica;
}

void llenarMatriz(int mat[DIMX][DIMY], int n, int m)
{
	int i, j;

	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
		{
			printf("Ingrese el elemento [%d][%d] de la matriz: ", i, j);
			scanf("%d", &mat[i][j]);
		}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			printf("%d	", mat[i][j]);

		printf("\n");
	}

}
