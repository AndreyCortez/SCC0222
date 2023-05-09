#include <stdio.h>
#include <ctype.h>

#define BUFFER_SIZE 100

char wrap(char c, int num_lin, int num_col)
{
    // printf("%d %d\n", num_lin, num_col);
    if (!isalpha(c))
    {
        return c;
    }
    int aux = (c + num_lin) * (num_col);
    if (islower(c))
    {
        return 97 + ((aux - 97) % (123 - 97));
    }
    else
    {
        return 65 + ((aux - 65) % (91 - 65));
    }
}

int main()
{
    char buffer[BUFFER_SIZE][BUFFER_SIZE];
    char line[BUFFER_SIZE];
    int line_index = 0;
    int buffer_index = 0;
    int line_char[BUFFER_SIZE];
    int num_char = 0;
    char c;
    while (1)
    {
        c = getchar();
        if (c == EOF)
        {
            break;
        }
        if (c == '\n')
        {
            line[buffer_index] = line_index;
            line_char[buffer_index] = num_char;
            num_char = 0;
            line_index = 0;
            buffer_index += 1;
        }
        else
        {
            buffer[buffer_index][line_index] = c;
            if (isalpha(c))
            {
                num_char += 1;
            }
            line_index += 1;
        }
    }

    for (int i = 0; i < buffer_index; i++)
    {
        for (int j = 0; j < line[i]; j++)
        {
            printf("%c", wrap(buffer[i][j], line_char[i], buffer_index));
        }
        printf("\n");
    }
}