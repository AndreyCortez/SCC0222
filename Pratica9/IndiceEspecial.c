#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int *numeros, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int numero;
        scanf("%d", &numero);
        numeros[i] = numero;
    }
}

void indice_especial(int* numeros, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        int soma1 = 0;
        int soma2 = 0;
        for (int j = i + 1; j < tam; j++)
        {
            soma1 += numeros[j];
        }
        for (int j = i - 1; j >= 0; j--)
        {
            soma2 += numeros[j];
        }
        if(soma1 == soma2)
        {
            printf("%d\n", i);
            return;
        }
    }

    printf("-1\n");
}

int main()
{

    int tam;
    int *pontos;

    scanf("%d", &tam);
    pontos = malloc(tam * sizeof(int));

    preencher_vetor(pontos, tam);
    indice_especial(pontos, tam);
}