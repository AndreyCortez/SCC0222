#include <stdio.h>

void multiplicar_ponto(float scalar)
{
    float x, y;
    scanf("%f %f", &x, &y);

    printf("%.2f %.2f\n", x * scalar, y * scalar);
}

int main()
{
    int num_pontos;
    scanf("%d", &num_pontos);

    float scalar;
    scanf("%f", &scalar);

    for (int i = 0; i < num_pontos; i++)
    {
        multiplicar_ponto(scalar);
    }
}