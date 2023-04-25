#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
  char figura;
  scanf("%c", &figura);

  if (figura == 'q')
  {
    float lado;
    scanf("%f", &lado);
    printf("%.2f", lado * lado);
  }
  if (figura == 't')
  {
    float b, h;
    scanf("%f %f", &b, &h);
    printf("%.2f", b * h / 2);
  }
  if (figura == 'r')
  {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f", a * b);
  }
  if (figura == 'c')
  {
    float r;
    scanf("%f", &r);
    printf("%.2f", PI * r * r);
  }
}