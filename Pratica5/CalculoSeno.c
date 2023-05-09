#include<stdio.h>

float fatorial(double numero)
{
    double resultado = 1;
    for (int i = 0; i < numero; i++)
    {
        resultado *= numero - i;
    }
    return resultado;
}

double power(double numero, double potencia)
{
    double resultado = 1;
    for (int i = 0; i < potencia; i++)
    {
        resultado *= numero;
    }
    return resultado;
}

double termo_sequencia_seno(double x, double indice)
{
    return power(-1, indice) * power(x, 2 * indice + 1)/fatorial(2 * indice + 1);
}

double seno(double x, double precisao)
{
    float resultado = 0;
    for (int i = 0; i < precisao; i++)
    {
        resultado += termo_sequencia_seno(x, i);
    }
    return resultado;
}

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.6f\n", seno(x, 300));
}