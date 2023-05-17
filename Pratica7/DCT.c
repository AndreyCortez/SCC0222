#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double termo(int n, int N, int k, double *arr)
{
    return (arr[n] * cos((M_PI / (double)N) * ((double)n + (1.0 / 2.0)) * k));
}

int main()
{
    int tam;
    scanf("%d", &tam);

    double *vec;
    vec = malloc(tam * sizeof(double));

    for (int i = 0; i < tam; i++)
    {
        scanf("%lf", &(vec[i]));
    }

    for (int i = 0; i < tam; i++)
    {
        double sum = 0;
        for (int j = 0; j < tam; j++)
        {
            sum += termo(j, tam, i, vec);
        }
        printf("%.4lf\n", sum);
    }
}