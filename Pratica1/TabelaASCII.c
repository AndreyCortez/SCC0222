#include <stdio.h>

int main() {
  int inteiro;
  char caractere;

  scanf("%d %c", &inteiro, &caractere);

  printf("Inteiro lido: %d\nCodigo hexadecimal: %x\nCaractere ASCII: %c\n\n",
         inteiro, inteiro, inteiro);
  printf("Inteiro lido: %d\nCodigo hexadecimal: %x\nCaractere ASCII: %c\n",
         caractere, caractere, caractere);

  return 0;
}
