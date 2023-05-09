#include <stdio.h>

int primos_menores[10000];
int tamanho = 0;

void primos_menores_que(int high)
{
    int low, i, flag;
    low = 0;
    while (low <= high)
    {
        flag = 0;

        if (low <= 1)
        {
            ++low;
            continue;
        }

        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            primos_menores[tamanho] = low;
            tamanho++;
        }
        ++low;
    }
}

int main()
{
    int numero;
    scanf("%d", &numero);

    primos_menores_que(numero);

    int vezes_numero = 0;

    for (int i = 0; i < tamanho; i++)
    {
        while (numero % primos_menores[i] == 0)
        {
            vezes_numero += 1;
            numero /= primos_menores[i];

            if (numero % primos_menores[i] != 0)
            {
                printf("%d %d\n", primos_menores[i], vezes_numero);
                vezes_numero = 0;
            }
        }
    }
    return 0;
}