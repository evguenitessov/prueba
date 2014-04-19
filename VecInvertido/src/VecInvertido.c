/*
 ============================================================================
 Name        : VecInvertido.c
 Author      : Euge
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void mostrar (int vector1[], int vector2[], int n);

int main(void)
{
	 int j=0,i,n,vector1[100],vector2[100];

	 printf ("Ingrese cantidad de elementos a ingresar en el vector\n");
	 scanf ("%d",&n);

	 for (i=0;i<=(n-1);i++)
	 {
		printf ("Ingrese elemento %d del vector\n",i);
		scanf ("%d",&vector1[i]);
	 }

	 for (i=(n-1);i>=0;i--)
	 {
		 vector2[j]=vector1[i];
		 j++;
	 }

	 mostrar (vector1,vector2,n);

	return EXIT_SUCCESS;
}

void mostrar (int vector1[],int vector2[],int n)
{
	int i=0;

	printf ("El primer vector es de: ");

	for (i=0;i<=(n-1);i++)
		printf ("%d ",vector1[i]);

	printf ("\nEn orden inverso es de: ");

	for (i=0;i<=(n-1);i++)
		printf ("%d ",vector2[i]);
}
