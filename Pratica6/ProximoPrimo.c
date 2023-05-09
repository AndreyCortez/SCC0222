#include <stdio.h>

int is_prime(int n)
{

    int i, flag = 1;

    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int tamanho;
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        int numero;
        scanf("%d", &numero);

        if (is_prime(numero))
        {
            printf("%d eh primo.\n", numero);
        }
        else
        {
            printf("%d nao eh primo, o proximo primo eh ", numero);

            while (!is_prime(numero))
            {
                numero += 1;
            }

            printf("%d.\n", numero);
        }
    }
}