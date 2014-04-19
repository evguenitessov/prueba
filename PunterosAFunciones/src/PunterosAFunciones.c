/*
 ============================================================================
 Name        : PunterosAFunciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double suma_cuadrados(double (*)(double), int, int);
double inversa ( double x) { return 1.0/x; }

int main(void)
{
	double s;
	double (*f[1])(double) = {inversa}; /* declaración e inicialización */

	s = suma_cuadrados(f[0], 1, 3);
	printf("suma de 1 a 100 de f[%d](i)^2 = %lf\n", 0, s);

	return EXIT_SUCCESS;
}

double suma_cuadrados ( double (*f)(double x), int i_0, int i_f )
{
	double s = 0, x;
	int i;
	for (i=i_0; i<=i_f; i++)
	{
	   x = i;
	   s += f(x)*f(x); /* (*f)(x)*(*f)(x) en forma más explícita */
	}
	return s;
}
