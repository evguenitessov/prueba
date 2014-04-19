/*
 ============================================================================
 Name        : StringInvertido.c
 Author      : Euge
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//void mostrar (int vector1[], int vector2[], int n);

int main(void)
{
	 //int j=0,i,n,vector1[100],vector2[100];
	int i, j = 0;
	 char vec1[] = "hola", vec2[4];

	 //pal = "hola";

	 /*printf ("Ingrese cantidad de elementos a ingresar en el vector\n");
	 scanf ("%d",&n);*/

	 /*for (i=0;i<=(n-1);i++)
	 {
		printf ("Ingrese elemento %d del vector\n",i);
		scanf ("%d",&vector1[i]);
	 }*/

	 for (i=3;i>=0;i--)
	 {
		 vec2[j]=vec1[i];
		 j++;
	 }

	 for (i=0;i<=3;i++)
	 		 printf("%c", vec1[i]);

	 printf("\n");

	 for (i=0;i<=3;i++)
		 printf("%c", vec2[i]);


	 //mostrar (vector1,vector2,n);

	return EXIT_SUCCESS;
}

/*void mostrar (int vector1[],int vector2[],int n)
{
	int i=0;

	printf ("El primer vector es de: ");

	for (i=0;i<=(n-1);i++)
		printf ("%d ",vector1[i]);

	printf ("\nEn orden inverso es de: ");

	for (i=0;i<=(n-1);i++)
		printf ("%d ",vector2[i]);
}*/
