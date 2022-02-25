#include <stdio.h>
#include <stdlib.h>
#define VECTOR_SIZE 5

int main (void) {
    // Declaração de variáveis
    int vetor[VECTOR_SIZE];
    int index;

    // Entrada de dados
    for (index=0; index < VECTOR_SIZE; index++) {
        printf("\nVetor[%2d] -> ", index);
        scanf("%i", &vetor[index]);
    }

    // Ordenação BubbleSort
    BubbleSort(vetor, VECTOR_SIZE);

    // Saída de dados
    


    
    
    return 0;
}