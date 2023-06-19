#include <stdio.h>
#include <stdlib.h>

int pontos[100];
int colocacoes[100];
int sla[100];

void preencher_vetor(int *numeros, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int numero;
        scanf("%d", &numero);
        numeros[i] = numero;
        pontos[numero] = i;
        sla[i] = numero;
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

void raquear_atletas(int* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        
        colocacoes[pontos[arr[i]]] = tam - i;
    }
}


void printar_saidas(int* arr, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%dº Atleta, %d Pontos, %dº Colocado\n", i +1, sla[i], colocacoes[i]);
    }
}


int main()
{
    int tam;
    int* pontos;

    scanf("%d", &tam);
    pontos = malloc(tam * sizeof(int));

    preencher_vetor(pontos, tam);
    insertionSort(pontos, tam);
    raquear_atletas(pontos, tam);
    printar_saidas(pontos, tam);
}