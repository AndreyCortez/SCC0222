#include<stdio.h>
#include<stdlib.h>

int main()
{
    int tam;
    int *vec;

    scanf("%d", &tam);
    vec = malloc(tam * sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &(vec[i]));
    }

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int soma = 0;
    for (int i = num1; i <= num2; i++)
    {
        soma += vec[i];
    }

    printf("%d\n", soma);
}