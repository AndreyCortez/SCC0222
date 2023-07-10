#include <stdio.h>

int contar_caracteres(const char *nome_arquivo) {
  FILE *arquivo = fopen(nome_arquivo, "r");
  if (arquivo == NULL) {
    printf("O arquivo '%s' não foi encontrado.\n", nome_arquivo);
    return 0;
  }

  int contador = 0;
  int caractere;
  while ((caractere = fgetc(arquivo)) != EOF) {
    contador++;
  }

  fclose(arquivo);
  return contador;
}

int main() {
  char nome_arquivo[100];
  scanf("%s", nome_arquivo);
  int total_caracteres = contar_caracteres(nome_arquivo);
  printf("%d\n", total_caracteres);

  return 0;
}
