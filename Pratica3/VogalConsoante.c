#include <stdio.h>

int main() {
  char letra;
  scanf("%c", &letra);

  char vogais[10] = "aeiouAEIOU";
  int alfabeto[2] = {0x41, 0x7A};

  for (int i = 0; i < 10; i++) {
    if (letra == vogais[i]) {
      printf("Eh uma vogal\n");
      return 1;
    }
  }
  if (letra >= alfabeto[0] && letra <= alfabeto[1]) {
    printf("Eh uma consoante\n");
    return 1;
  }

  printf("Nao eh uma letra do alfabeto\n");
  return 1;
}