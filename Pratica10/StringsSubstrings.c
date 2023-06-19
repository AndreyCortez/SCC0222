#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char sent[1000];
    fscanf(stdin, "%[^\n]%*c", sent);
    
    char word[100];
    fscanf(stdin, "%[^\n]%*c", word);
    
    char *pch = strstr(sent, word);

    if (pch <= (char*)0)
    {
        printf("A sub string nao foi encontrada\n");
    }
    
    while (pch > (char*)0)
    {
        printf("A sub string foi encontrada na posicao = %ld\n", (pch - sent));
        
        sent[(pch - sent)] = ' ';
        //printf("%s\n", sent);
        pch = strstr(sent, word);
    }
    
}