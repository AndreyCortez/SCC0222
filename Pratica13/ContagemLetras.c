#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c = getchar();
    char *string;
    int tam_string = 0;
    string = malloc(1);

    int letras[26];
    for (int i = 0; i < 26; i++)
    {
        letras[i] = 0;
    }

    while (c != EOF)
    {
        if (isalpha(c))
        {
            tam_string += 1;
            string = realloc(string, tam_string);
            string[tam_string - 1] = tolower(c);
        }
        c = getchar();
    }

    for (int i = 0; i < tam_string; i++)
    {
        letras[string[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letras[i] != 0)
            printf("%c: %d\n", 'a' + i, letras[i]);
    }
}