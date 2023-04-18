#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2;

    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float euclides = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float manhattan = fabs(x1 - x2) + fabs(y1 - y2);

    printf("Distancia euclidiana: %.3f\n", euclides);
    printf("Distancia Manhattan: %.3f\n", manhattan);


}