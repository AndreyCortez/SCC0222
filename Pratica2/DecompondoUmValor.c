#include <stdio.h>

int main() {
  int numero;
  scanf("%d", &numero);

  printf("%d nota(s) de R$ 100\n", numero / 100);
  printf("%d nota(s) de R$ 50\n", (numero % 100) / 50);
  printf("%d nota(s) de R$ 20\n", ((numero % 100) % 50) / 20);
  printf("%d nota(s) de R$ 10\n", (((numero % 100) % 50) % 20) / 10);
  printf("%d nota(s) de R$ 5\n", ((((numero % 100) % 50) % 20) % 10) / 5);
  printf("%d nota(s) de R$ 2\n", (((((numero % 100) % 50) % 20) % 10) % 5) / 2);
  printf("%d moeda(s) de R$ 1\n",
         (((((numero % 100) % 50) % 20) % 10) % 5) % 2);
}