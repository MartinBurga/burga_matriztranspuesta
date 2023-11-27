#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    //Se le pide al usuario las dimensiones de la matriz.

    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {
            numero = rand() % 100;
            numero = rand() % (numero+1);
            matrix[i][j] = numero;
        }
    }

    //Se generan numeros aleatorios del 0 al 100 y se va rellenando la matriz 

    printf(" \n");
    printf("La matriz original es:\n");
    for (int i = 0; i < dx; i++)
    {
        for (int j = 0; j < dy; j++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Se imprimen los valores de la matriz original. 
    printf(" \n");
    printf("La matriz transpuesta es:\n");
    for (int j = 0; j < dy; j++)
    {
        for (int i = 0; i < dx; i++)
        {

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //Se imprimen los mismos valores aleatorios generados pero se invierte la forma de escribir de la matriz. 
    return 0;
}