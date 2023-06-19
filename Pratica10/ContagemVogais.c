#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];

    scanf("%s", string);

    char vogais[10] = "aeiouAEIOU";
    int num_vogais = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (string[i] == vogais[j])
            {
                num_vogais += 1;
            }
        }
    }

    if (num_vogais == 1)
    {
        printf("A palavra \"%s\" contem %d vogal.\n", string, num_vogais);
        return 0;
    }
    if (num_vogais != 0)
    {
        printf("A palavra \"%s\" contem %d vogais.\n", string, num_vogais);
    }
    else
    {
        printf("A palavra \"%s\" nao contem vogais.\n", string);
    }
}