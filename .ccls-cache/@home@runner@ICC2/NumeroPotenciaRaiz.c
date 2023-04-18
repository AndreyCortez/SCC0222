#include <math.h>
#include <stdio.h>

int main(void) {
  int numero;
  scanf("%d", &numero);

  float raiz = pow(numero,2);
  float quadrado = pow(numero, 2);

  printf("Numero: %d \n %15.2e\n %11.2f", numero, quadrado, raiz);

  return 0;
}