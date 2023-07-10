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
  char caminho[100];
  char line[MAX_LINE_LENGTH];

  int salario;

  scanf("%s %d", caminho, &salario);

  FILE *file;

  file = fopen(caminho, "r");

  if (file == NULL) {
    printf("Este banco de dados nao existe.\n");
    return 1;
  }

  int numero_trabalhadores;

  while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
    numero_trabalhadores = atoi(line);
    // printf("%d\n", numero_trabalhadores);

    Trabalhador trabalhadores[1000];

    for (int i = 0; i < numero_trabalhadores; i++) {
      (fgets(line, MAX_LINE_LENGTH, file));
      {
        strcpy(trabalhadores[i].nome, line);
        // printf("%s\n",trabalhadores[i].nome);
      }
      (fgets(line, MAX_LINE_LENGTH, file));
      { trabalhadores[i].idade = atoi(line); }

      (fgets(line, MAX_LINE_LENGTH, file));
      { strcpy(trabalhadores[i].cargo, line); }

      (fgets(line, MAX_LINE_LENGTH, file));
      { trabalhadores[i].salario = atoi(line); }

      if (trabalhadores[i].salario > salario) {
        printf("%s%d\n%s%d\n", trabalhadores[i].nome, trabalhadores[i].idade,
               trabalhadores[i].cargo, trabalhadores[i].salario);
      }
    }
  }

  fclose(file);

  return 0;
}