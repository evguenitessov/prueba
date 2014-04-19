/*
 ============================================================================
 Name        : Ej_6_56.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	// Declaracion de variables
	 int numero,cantidad,contador;
	 int hora = time(NULL);

	 // Semilla de rand();
	 srand(hora);

	 /* Recogemos por teclado la cantidad de
		numeros que quiere el usuario */

		printf("Ingrese la cantidad de numeros aleatorios que desea generar\n");
		scanf("%d",&cantidad);

		/* Generamos un ciclo que se repite la cantidad
		   de veces indicada. En cada vuelta del ciclo se
		   genera y se imprime un numero aleatorio. */

		for(contador = 0; contador<cantidad; contador++)
		{

			   numero = rand();
			   numero = numero%10;
			   printf("%d ", numero);
		}

	return EXIT_SUCCESS;
}
