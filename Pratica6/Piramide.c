#include <stdio.h>

int main()
{
    int tamanho;
    scanf("%d", &tamanho);

    for (int i = 1; i <= tamanho; i++)
    {
        for (int j = 0; j < tamanho - i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}