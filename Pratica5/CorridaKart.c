#include <stdio.h>

void corrida(float a, float b, float tempo)
{

    if (tempo == 0)
    {
        printf("A corrida ainda nao comecou\n");
        return;
    }
    if (a == 0 && b == 0)
    {
        printf("Os dois pilotos nao querem competir\n");
        return;
    }
    if (a != 0 && b == 0)
    {
        printf("O piloto B desistiu inesperadamente\n");
        return;
    }
    if (a == 0 && b != 0)
    {
        printf("O piloto A desistiu inesperadamente\n");
        return;
    }
    if (tempo < 0)
    {
        printf("De alguma forma os pilotos voltaram no tempo\n");
        return;
    }
    if (a == b)
    {
        printf("Os karts empataram, percorrendo cada %.2fkm\n", b * tempo);
        return;
    }
    if (a > b)
    {
        printf("O kart A venceu e percorreu %.2fkm a mais que o kart B\n", (a - b) * tempo);
        return;
    }
    else if (b > a)
    {
        printf("O kart B venceu e percorreu %.2fkm a mais que o kart A\n", (b - a) * tempo);
        return;
    }
}

int main()
{
    int corridas = 0;
    scanf("%d", &corridas);

    for (int i = 0; i < corridas; i++)
    {
        float a, b, tempo;
        scanf("%f %f %f", &a, &b, &tempo);
        corrida(a, b, tempo);
    }
}