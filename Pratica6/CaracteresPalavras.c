#include <stdio.h>
#include <ctype.h>

#define BUFFER_SIZE 100

int main()
{
    int line_index = 0;
    int buffer_index = 0;
    int num_char = 0;
    int num_words = 1;
    char last_char = ' ';
    char c;
    while (1)
    {
        c = getchar();
        if (c == EOF)
        {
            break;
        }
        if (c == '\n' || c == '\r')
        {
            line_index = 0;
            if (last_char != '\n' && last_char != '\r' && last_char != ' ')
            {
                num_words += 1;
            };
            buffer_index += 1 * (c != '\r');
        }
        else
        {
            if (isalnum(c) || ispunct(c))
            {
                num_char += 1;
            }
            else
            {
                num_words += 1;
            }
            line_index += 1;
        }
        last_char = c;
    }

    printf("Caracteres: %d\nPalavras: %d\nLinhas: %d\n", num_char, num_words, buffer_index + 1);
}