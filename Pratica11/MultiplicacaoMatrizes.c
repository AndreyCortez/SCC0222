#include <stdio.h>
#include <stdlib.h>

void preencher_matriz(int **matriz, int m1, int m2)
{
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf("%d", &(matriz[i][j]));
        }
    }
}

void multiplicar_matriz(int **matriz1, int **matriz2, int m1, int m2, int m3, int m4)
{

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < m4; j++)
        {
            int termo = 0;
            for (int k = 0; k < m3; k++)
            {
                termo += matriz1[i][k] * matriz2[k][j];
            }
            printf("%d ", termo);
        }
        printf("\n");
    }
}

int main()
{
    int **matriz1;
    int **matriz2;

    int m1, m2, m3, m4;

    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

    if (m2 != m3)
    {
        printf("Impossível multiplicar matrizes com essas dimensões.\n");
        return 0;
    }

    matriz1 = malloc(m1 * sizeof(int *));
    for (int i = 0; i < m1; i++)
    {
        matriz1[i] = malloc(m2 * sizeof(int));
    }

    matriz2 = malloc(m3 * sizeof(int *));
    for (int i = 0; i < m3; i++)
    {
        matriz2[i] = malloc(m4 * sizeof(int));
    }

    preencher_matriz(matriz1, m1, m2);
    preencher_matriz(matriz2, m3, m4);

    multiplicar_matriz(matriz1, matriz2, m1, m2, m3, m4);
}