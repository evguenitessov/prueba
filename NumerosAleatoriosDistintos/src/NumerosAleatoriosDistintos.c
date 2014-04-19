#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20

void generarRandom(int [], int);
void ordenarVector(int [], int);
void mostrarVector(int [], int);

int main(void)
{
      srand(time(NULL));
      int vector[SIZE] = {0};

      generarRandom(vector, SIZE);
      ordenarVector(vector, SIZE);
      mostrarVector(vector, SIZE);


      return EXIT_SUCCESS;
}





void generarRandom(int v[], int size)
{
     int i, j, num, dupl;

     printf("RANDOM\n");
     for (i = 0; i < size; i++){
         num = 1 + rand() % size;
         dupl = 0;
         printf("%-4d", num);
         for (j = 0; j <= i; j++){
             if (num == v[j]){
                dupl = 1;
                break;
             }
         }
         if (dupl == 1)
            i--;
         else
            v[i] = num;
     }
}

void ordenarVector(int v[], int size)
{
     int i, j, temp;

     for (i = 0; i < size - 1; i++){
         for (j = i+1; j < size; j++){
             if (v[i] > v[j]){
                   temp = v[i];
                   v[i] = v[j];
                   v[j] = temp;
             }
         }
     }
}

void mostrarVector(int v[], int size)
{
     int i;

     printf("\n\nVECTOR\n");
     for (i = 0; i < size; i++)
         printf("%d ", v[i]);
}
