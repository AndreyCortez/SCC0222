#include <stdio.h>
#include <math.h>

int main()
{
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);

  float delta = b*b - 4*a*c;
  if (delta > 0)
  {
    float raiz1 = (-b - sqrt(delta))/(2*a);
    float raiz2 = (-b + sqrt(delta))/(2*a);
    if (raiz1 > raiz2) {printf("%.3f %.3f", raiz2, raiz1);}
    else {printf("%.3f %.3f", raiz1, raiz2);}
  }
  if (delta == 0)
  {
    
    printf("%.3f",(-b)/(2*a));
  }
  if (delta < 0)
  {
    printf("NAO EXISTE RAIZ REAL");
  }
}