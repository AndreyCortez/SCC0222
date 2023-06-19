#include <stdio.h>

void preencher_matriz(int matrix[3][3], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            scanf("%d", &(matrix[i][j]));
        }
    }
    
}

int calcular_determinante(int matrix[3][3], int tam)
{
    
    int determinante;
    
    if(tam == 1)
    {
        return matrix[0][0];
    }
    else if(tam == 2)
    {
        determinante = (matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1]);
    }
    else if(tam == 3)
    {
    determinante = (matrix[0][0] * matrix[1][1] * matrix[2][2])
    +  (matrix[0][1] * matrix[1][2] * matrix[2][0])
    +  (matrix[0][2] * matrix[1][0] * matrix[2][1])
    -  (matrix[0][1] * matrix[1][0] * matrix[2][2])
    -  (matrix[0][0] * matrix[1][2] * matrix[2][1])
    -  (matrix[0][2] * matrix[1][1] * matrix[2][0]);
    }
    return determinante;
}

int main()
{
    int tam;
    scanf("%d", &tam);


    int matrix[3][3];
    preencher_matriz(matrix, tam);


    int determinante = calcular_determinante(matrix, tam);
    printf("%d\n", determinante);
   
}