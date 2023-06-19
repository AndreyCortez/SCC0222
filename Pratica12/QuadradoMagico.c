#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    int y = x;

    int **matrix;
    matrix = malloc(x * sizeof(int *));

    for (int i = 0; i < x; i++)
    {
        matrix[i] = malloc(y * sizeof(int));
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &(matrix[i][j]));
        }
    }

    int base = 0;

    for (int i = 0; i < x; i++)
    {
        base += matrix[i][i];
    }

    for (int i = 0; i < x; i++)
    {
        int linha = 0;
        int coluna = 0;

        for (int j = 0; j < x; j++)
        {
            linha += matrix[i][j];
            coluna += matrix[j][i];
        }

        if (base != linha || base != coluna)
        {
            printf("NAO\n");
            return 1;
        }
    }

    printf("SIM\n");
}