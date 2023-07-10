#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TAM_PALAVRA 100

typedef struct {
    char palavra[MAX_TAM_PALAVRA];
    int frequencia;
} Palavra;

int comparar_palavras(const void* a, const void* b) {
    const Palavra* palavra_a = (const Palavra*)a;
    const Palavra* palavra_b = (const Palavra*)b;
    return strcmp(palavra_a->palavra, palavra_b->palavra);
}

void converte_minusculas(char* p) {
    char *src = p, *dst = p;

    while (*src)
    {
       if (ispunct((unsigned char)*src) && (unsigned char)*src != '-')
       {
          /* Skip this character */
          src++;
       }
       else if ((unsigned char)*src == '-')
       {
         if (isblank((unsigned char)*(src + 1)))
         {
           src++;
         }
       }
       else if (isupper((unsigned char)*src))
       {
          /* Make it lowercase */
          *dst++ = tolower((unsigned char)*src);
          src++;
       }
       else if (src == dst)
       {
          /* Increment both pointers without copying */
          src++;
          dst++;
       }
       else
       {
          /* Copy character */
          *dst++ = *src++;
       }
    }

    *dst = 0;
}

int main() {
    char nome_arquivo[100];
    scanf("%s", nome_arquivo);

    FILE* arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    Palavra* palavras = NULL;
    int num_palavras = 0;
    int capacidade_palavras = 0;

    char palavra_atual[MAX_TAM_PALAVRA];
    while (fscanf(arquivo, "%s", palavra_atual) == 1) {
        converte_minusculas(palavra_atual);

        int palavra_existente = 0;
        for (int i = 0; i < num_palavras; i++) {
            if (strcmp(palavra_atual, palavras[i].palavra) == 0) {
                palavras[i].frequencia++;
                palavra_existente = 1;
                break;
            }
        }

        if (!palavra_existente) {
            if (num_palavras >= capacidade_palavras) {
                capacidade_palavras += 10;
                palavras = (Palavra*)realloc(palavras, capacidade_palavras * sizeof(Palavra));
                if (palavras == NULL) {
                    printf("Erro ao alocar memória.\n");
                    fclose(arquivo);
                    return 1;
                }
            }

            strcpy(palavras[num_palavras].palavra, palavra_atual);
            palavras[num_palavras].frequencia = 1;
            num_palavras++;
        }
    }

    fclose(arquivo);

    // Ordenar as palavras em ordem alfabética
    // qsort(palavras, num_palavras, sizeof(Palavra), comparar_palavras);

    printf("O texto possui %d palavras distintas\n", num_palavras);
    for (int i = 0; i < num_palavras; i++) {
        printf("%s\n", palavras[i].palavra);
    }

    free(palavras);

    return 0;
}
