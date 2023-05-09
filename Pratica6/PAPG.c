#include <stdio.h>
#include <math.h>

int main()
{
    int tamanho;
    scanf("%d", &tamanho);

    float i0, a;
    scanf("%f %f", &i0, &a);

    // PA
    printf("PA: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.3f ", i0 + a * i);
    }
    printf("\n");

    // PG
    printf("PG: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%.3f ", i0 * pow(a, i));
    }
    printf("\n");
}