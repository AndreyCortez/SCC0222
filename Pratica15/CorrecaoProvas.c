#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

typedef struct {
  char nome[100];
  int idade;
  char cargo[100];
  int salario;
} Trabalhador;

int main() {
  char caminho1[100];
  char caminho2[100];
  char line1[MAX_LINE_LENGTH];
  char line2[MAX_LINE_LENGTH];

  FILE *file1;
  FILE *file2;

  scanf("%s", caminho1);
  scanf("%s", caminho2);

  file1 = fopen(caminho1, "r");

  if (file1 == NULL) {
    printf("Este banco de dados nao existe.\n");
    return 1;
  }

  file2 = fopen(caminho2, "r");

  if (file2 == NULL) {
    printf("Este banco de dados nao existe.\n");
    return 1;
  }

  while (fgets(line1, MAX_LINE_LENGTH, file1) != NULL) {
  }
  while (fgets(line2, MAX_LINE_LENGTH, file2) != NULL) {
  }

  int pontuacao = 0;
  for (int i = 0; i < strlen(line2); i++) {
    pontuacao += (line1[i] == line2[i]);
  }

  printf("%d ", pontuacao);

  if (pontuacao >= 5) {
    printf("APROVADO\n");
  } else if (pontuacao < 5 && pontuacao >= 3) {
    printf("RECUPERACAO\n");
  } else {
    printf("REPROVADO\n");
  }

  fclose(file1);
  fclose(file2);

  return 0;
}