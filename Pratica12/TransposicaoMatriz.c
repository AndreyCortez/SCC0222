#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int **matrix;
    matrix = malloc(x * sizeof(int *));

    for (int i = 0; i < x; i++)
    {
        matrix[i] = malloc(y * sizeof(int));
    }

    for (int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            scanf("%d", &(matrix[i][j]));
        }
    }


    for (int i = 0; i < y; i++)
    {
        for(int j = 0; j < x; j++)
        {
            printf("%2d ", matrix[j][i]);
        }
        printf("\n");
    }

}