#include <stdio.h>

int main() {
  long long int a, b, c, x;

  scanf("%lld %lld %lld %lld", &a, &b, &c, &x);
  printf("%lld\n", a * x * x + b * x + c);
}