#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c = getchar();
    char *string;
    int tam_string = 0;
    string = malloc(1);

    while (c != EOF)
    {
        tam_string += 1;
        string = realloc(string, tam_string + 5);
        string[tam_string - 1] = c;

        c = getchar();
    }

    for (int i = tam_string - 1; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    printf("\n");
}