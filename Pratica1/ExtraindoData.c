#include <stdio.h>

int main(void) {
  int year;
  int month;
  int day;

  scanf("%*[a-z]");

  scanf("%3x", &year);
  scanf("%2d", &month);
  scanf("%2o", &day);

  printf("Data: %02d/%02d/%04d\n", day, month, year);

  return 0;
}