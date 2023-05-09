#include <stdio.h>

int main()
{
    char pessoa_1[10];
    char pessoa_2[10];

    int modo, rodadas;

    scanf("%s %s", pessoa_1, pessoa_2);
    scanf("%d %d", &modo, &rodadas);

    for (int i = 0; i < rodadas; i++)
    {
        int num1, num2;
        scanf("%d %d", &num1, &num2);

        if (num1 + num2 == 0)
        {
            printf("Refazendo a rodada\n");
            i -= 1;
        }
        else if ((num1 + num2) % 2 == modo)
        {
            printf("%s venceu!\n", pessoa_1);
        }
        else
        {
            printf("%s venceu!\n", pessoa_2);
        }
    }
}