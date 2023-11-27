#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int dx;
    int dy;
    int numero;

    printf("Inserta la dimension de su matriz en las filas\n");
    scanf("%d", &dx);
    printf("Inserta la dimension de su matriz en las columnas\n");
    scanf("%d", &dy);
    int matrix[dx][dy];

    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {
            numero = rand() % 100;
            numero = rand() % (numero);    
            matrix[i][j] = numero;
        }
    }

    printf("La matriz original es\n");
    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {
            
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}