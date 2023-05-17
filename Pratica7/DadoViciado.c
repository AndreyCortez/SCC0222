#include <stdio.h>

int main()
{
    char c = getchar();
    int vec[6] = {0, 0, 0, 0, 0, 0};

    while (c != EOF)
    {
        int num = c - '0';
        vec[num - 1] += 1;
        c = getchar();
    }

    int max = 0;
    int max_ind[6];
    int max_ind_tam = 1;

    for (int i = 0; i < 6; i++)
    {
        // printf(" %d ", vec[i]);
        if (vec[i] > max)
        {
            max = vec[i];
            max_ind[0] = i;
            max_ind_tam = 1;
        }
        else if (vec[i] == max)
        {
            max_ind_tam += 1;
            max_ind[max_ind_tam - 1] = i;
        }
    }
    // printf("\n");

    for (int i = 0; i < max_ind_tam; i++)
    {
        printf("%d\n", max_ind[i] + 1);
    }

    printf("%d\n", max);
}