#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static int myCompare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

void sort(char *arr[], int n)
{
    qsort(arr, n, sizeof(char *), myCompare);
}

int main()
{
    char string[100];
    char **banco;
    banco = malloc(1000);
    int tam_banco = 0;

    while (strcmp(string, "sair") != 0)
    {

        scanf("%s", string);

        if (strcmp(string, "sair") != 0)
        {
            tam_banco += 1;
            banco[tam_banco - 1] = malloc(strlen(string));
            strcpy(banco[tam_banco - 1], string);
        }
    }

    sort(banco, tam_banco);

    for (int i = 0; i < tam_banco; i++)
    {
        printf("%d) %s\n", i + 1, banco[i]);
    }
}