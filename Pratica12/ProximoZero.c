#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);

    int *vetor;
    vetor = malloc(x * sizeof(int));

    int menor = 0;

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &(vetor[i]));
    }

    for (int i = 0; i < x; i++)
    {
        if (abs(vetor[i]) < abs(vetor[menor]))
        {
            menor = i;
        }
    }

    printf("%d\n", vetor[menor]);

    for (int i = 0; i < x; i++)
    {
        if (abs(vetor[i] == vetor[menor]))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}