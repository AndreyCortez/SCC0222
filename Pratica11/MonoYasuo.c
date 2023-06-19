#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int lin, col;

    scanf("%d %d", &lin, &col);

    char matrix[1000][1000];
    char aux_matrix[1000][1000];

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%c", &(matrix[i][j]));
        }
    }

    int lugares_vazios = 0;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int tem_vaga_linha = 1;
            int tem_vaga_coluna = 1;
            int tem_vaga_assento = 1;
            if (matrix[i][j] != 'v')
            {
                tem_vaga_assento = 0;
            }
            for (int k = 0; k < col; k++)
            {
                if (matrix[i][k] == 'c')
                    tem_vaga_linha = 0;
            }
            for (int k = 0; k < lin; k++)
            {
                if (matrix[k][j] == 'c')
                    tem_vaga_coluna = 0;
            }

            int vaga = tem_vaga_linha * tem_vaga_coluna * tem_vaga_assento;
            
            if (vaga)
                aux_matrix[i][j] = 'o';
            else
                aux_matrix[i][j] = 'x';
                
            lugares_vazios += vaga;
        }
    }

    if (lugares_vazios == 0)
    {
        printf("Eh um dia triste para os mono Yasuo\n");
    }
    else
    {
        for (int i = 0; i < lin; i++)
        {
            for (int j = 0; j < col; j++)
            {
                printf("%c ", aux_matrix[i][j]);
            }
            printf("\n");
        }
    }
}