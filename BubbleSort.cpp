
#define TRUE 1
#define FALSE 0

// Apelido para o tipo de dado int
typedef int boolean;
// Funções 
void swap(int vetor[], int x, int y)
{
    int aux = vetor[x];
    vetor[x] = vetor[y];
    vetor[y] = aux;
}

// BubbleSort

void BubbleSort(int vetor[], int size)
{
    int index;
    boolean trocou;

    while (trocou == TRUE)
    {
        trocou = FALSE;
        for (index = 0; index < size; index++)
        {
            if (vetor[index] > vetor[index+1]) {
                swap(vetor, index, index+1);
                trocou = TRUE;
            }
        }
        
    }
    
}