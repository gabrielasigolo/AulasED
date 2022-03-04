#include <stdio.h>
#include <stdlib.h>
#define VECTOR_SIZE 5

extern void BubbleSort(int[], int);

int main(void)
{
    /*
       Declaração de variáveis
    */
    int vetor[VECTOR_SIZE];
    int indx;
    /*
        Entrada de Dados
    */
    for (indx=0; indx < VECTOR_SIZE; indx++)
    {
        printf("\nVetor[%2d] -> ", indx);
        scanf("%i",&vetor[indx]);
    }
    /*
        Odenação BubleSort
    */
    BubbleSort(vetor, VECTOR_SIZE);
    /*
        Saída de Dados
    */
    for (indx=0; indx < VECTOR_SIZE; indx++)
    {
        printf("\nVetor[%2d] -> %4d ", indx, vetor[indx]);
    }
    printf("\n\n\n");
}
