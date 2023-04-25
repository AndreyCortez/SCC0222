#include <stdio.h>
#include <stdlib.h>

int main()
{
  int lado1, lado2, lado3;

  scanf("%d %d %d", &lado1, &lado2, &lado3);

  if (!((lado1 < lado2 + lado3)
    && (lado1 > abs(lado2 - lado3)) 
    && lado2 < (lado1 + lado3) 
    && lado2 > abs(lado1 - lado3)
    && lado3 < (lado2 + lado1)
    && lado3 > abs(lado2 - lado1)))
  {
    printf("INVALIDO\n");
    return 1;
  }
  
  int iguais = (lado1 == lado2) + (lado1 == lado3) + (lado2 == lado3);

  switch (iguais)
  {
    case 0:
      printf("ESCALENO\n");
    break;

    case 1:
      printf("ISOSCELES\n");
    break;

    case 3:
      printf("EQUILATERO\n");
    break;

    default:
      printf("INVALIDO\n");
    break;
  }
  
}