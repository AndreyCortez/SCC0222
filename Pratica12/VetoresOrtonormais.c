#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    int *vec1;
    int *vec2;

    vec1 = malloc(x * sizeof(int));
    vec2 = malloc(x * sizeof(int));

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &(vec1[i]));
    }

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &(vec2[i]));
    }

    int produto_vetorial = 0;
    int modulo_vec1 = 0;
    int modulo_vec2 = 0;

    for (int i = 0; i < x; i++)
    {
        produto_vetorial += vec1[i] * vec2[i];
        modulo_vec1 += vec1[i] * vec1[i];
        modulo_vec2 += vec2[i] * vec2[i];
    }

    if (produto_vetorial == 0 && modulo_vec1 == 1 && modulo_vec2 == 1)
    {
        printf("sao ortonormais\n");
    }
    else
    {
        printf("nao sao ortonormais\n");
    }
}