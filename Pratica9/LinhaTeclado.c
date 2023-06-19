#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char linha1[20] = "qwertyuiopQWERTYUIOP";

char linha2[18] = "asdfghjklASDFGHJKL";
char linha3[14] = "zxcvbnmZXCVBNM";

int checar_linha(char *string, char *linha, int tam)
{
    for (int i = 0; i < 100; i++)
    {
        if (isalpha(string[i]))
        {
            int flag = 0;
            for (int j = 0; j < tam; j++)
            {
                if (string[i] == linha[j])
                {
                    flag = 1;
                }
            }
            if (!flag)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{

    char buffer[100];
    int buffer_index = 0;

    while (1)
    {
        char c = getchar();
        if (c == EOF)
        {
            if (checar_linha(buffer, linha1, 20) || checar_linha(buffer, linha2, 18) || checar_linha(buffer, linha3, 14))
            {
                printf("%s\n", buffer);
            }
            memset(buffer, 0, 100);
            buffer_index = 0;
            break;
        }
        if (c == '\n' || c == '\r')
        {
            if (checar_linha(buffer, linha1, 20) || checar_linha(buffer, linha2, 18) || checar_linha(buffer, linha3, 14))
            {
                printf("%s\n", buffer);
            }
            memset(buffer, 0, 100);
            buffer_index = 0;
        }
        else
        {
            buffer[buffer_index] = c;
            buffer_index += 1;
        }
    }
}