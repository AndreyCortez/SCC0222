#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int numero_caracter = 1, numero_linha = 1;
    char caracter;

    while ((caracter = getchar()) != EOF)
    {
        int novo_caracter = caracter;

        if (caracter == '\n')
        {
            numero_linha++;
            numero_caracter = 0;
        }
        else if (isupper(caracter))
        {
            novo_caracter = ((caracter + numero_caracter) * numero_linha) % 26 + 'A';
        }
        else if (islower(caracter))
        {
            novo_caracter = ((caracter + numero_caracter) * numero_linha) % 26 + 'a';
        }

        numero_caracter++;
        printf("%c", novo_caracter);
    }

    return 0;
}
