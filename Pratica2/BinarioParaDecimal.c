#include <math.h>
#include <stdio.h>

int todecimal(long bno) {
  int dno = 0, i = 0, rem;
  while (bno != 0) {
    rem = bno % 10;
    bno /= 10;
    dno += rem * pow(2, i);
    ++i;
  }
  return dno;
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d\n", todecimal(a));
}