#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[10];
    int ouros;
    int pratas;
    int bronzes;
} Pontuacao;

int compare(const void *_s1, const void *_s2)
{
    Pontuacao s1 = *((Pontuacao *)_s1);
    Pontuacao s2 = *((Pontuacao *)_s2);

    if (s1.ouros != s2.ouros)
    {
        return (s2.ouros - s1.ouros);
    }
    else if (s1.pratas != s2.pratas)
    {
        return (s2.pratas - s1.pratas);
    }
    else if (s1.bronzes != s2.bronzes)
    {
        return (s2.bronzes - s1.bronzes);
    }

    return 0;
}

int main()
{
    int quantidade;
    scanf("%d", &quantidade);

    Pontuacao *tabela;
    tabela = malloc(quantidade * sizeof(Pontuacao));

    for (int i = 0; i < quantidade; i++)
    {
        Pontuacao pontuacao;
        scanf("%s %d %d %d", (char *)&(pontuacao.nome), &(pontuacao.ouros), &(pontuacao.pratas), &(pontuacao.bronzes));
        tabela[i] = pontuacao;
    }

    qsort(tabela, quantidade, sizeof(Pontuacao), compare);

    for (int i = 0; i < quantidade; i++)
    {
        printf("%s %d %d %d\n", (tabela[i].nome), (tabela[i].ouros), (tabela[i].pratas), (tabela[i].bronzes));
    }
}