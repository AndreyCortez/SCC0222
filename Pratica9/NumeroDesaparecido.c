#include <stdio.h>
#include <stdlib.h>

void preencher_numeros(int *numeros, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int numero;
        scanf("%d", &numero);
        numeros[i] = numero;
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void numero_desaparecido(int *numeros, int tamanho)
{
    if (numeros[0] != 1)
    {
        printf("Numero desaparecido: 1");
        return;
    }
    for (int i = 0; i < tamanho - 1; i++)
    {
        if (numeros[i + 1] != numeros[i] + 1)
        {
            printf("Numero desaparecido: %d\n", numeros[i] + 1);
            return;
        }
    }
    printf("Numero desaparecido: %d\n", tamanho + 1);
}

int main()
{
    int tamanho;
    int *numeros;

    scanf("%d", &tamanho);

    numeros = malloc((tamanho - 1) * sizeof(int));
    preencher_numeros(numeros, tamanho - 1);

    insertionSort(numeros, tamanho - 1);

    numero_desaparecido(numeros, tamanho - 1);
}