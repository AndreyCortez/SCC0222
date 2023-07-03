#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char **banco;
    banco = malloc(1);
    int quantidade;

    int tam_banco = 0;

    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        char *string;
        string = malloc(1);
        int tam_string = 0;
        char c = getchar();

        while (!isalpha(c))
        {
            c = getchar();
        }

        while (c != '#')
        {
            tam_string += 1;
            string = realloc(string, tam_string * sizeof(char) + 5);
            string[tam_string - 1] = c;
            c = getchar();
        }

        tam_banco += 1;
        banco = realloc(banco, tam_banco + 2);
        banco[tam_banco - 1] = malloc(tam_string * sizeof(char) + 5);
        strcpy(banco[tam_banco - 1], string);
    }

    scanf("%d", &quantidade);

    for (int i = 0; i < tam_banco; i++)
    {
        printf("%s\n", banco[i]);
    }

    for (int i = 0; i < quantidade; i++)
    {
        char *string;
        string = malloc(1);
        int tam_string = 0;
        char c = getchar();

        while (!isalpha(c))
        {
            c = getchar();
        }

        while (c != '#')
        {
            tam_string += 1;
            string = realloc(string, tam_string * sizeof(char) + 5);
            string[tam_string - 1] = c;
            c = getchar();
        }

        int repetido = 0;

        for (int i = 0; i < tam_banco; i++)
        {
            if (strcmp(banco[i], string) == 0)
            {
                repetido = 1;
            }
        }

        if (!repetido)
        {
            printf("%s\n", string);
        }
    }
}