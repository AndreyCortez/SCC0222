#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;

	scanf("%f %f %f", &a, &b, &c);

	printf("Media aritimetica: %.4f\n", (a+b+c)/3);
	printf("Media harmonica: %.4f\n", 3/(1/a + 1/b + 1/c));
	printf("Media geometrica: %.4f\n", pow(a*b*c, 1.0/3.0));
}