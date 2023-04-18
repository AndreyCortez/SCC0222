#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t input;
    char mensagem[4];

    scanf("%d", &input);
    
    for (int i = 0; i < 4; i++)
    {
        mensagem[i] = input >> 8 * (3 - i);
    }

    printf("%s\n", mensagem);

}