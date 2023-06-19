#include <stdio.h>

int distancia_hamming(int num1, int num2)
{
    int distancia = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((num1>>i)&0b01) != ((num2>>i)&0b01))
        {
            distancia += 1;
        }
    }
    return distancia;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int distancia = distancia_hamming(num1, num2);
    printf("%d\n", distancia);
}