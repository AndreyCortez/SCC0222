#include <stdio.h>
#include <math.h>

int main()
{
    double indice_max, resultado;
    scanf("%lf", &indice_max);
    
    resultado = 0;
    for (int i = 0; i < indice_max; i++)
    {
        resultado += pow(-1.0, i)/(i + 1.0);
    }

    printf("%.4f\n", resultado);
}