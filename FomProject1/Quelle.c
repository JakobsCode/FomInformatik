#include <stdio.h>
#include <stdlib.h>

#define Spalten 10
#define Zeilen 10

void ElMatrix(int* array[Zeilen][Spalten], unsigned int Row, unsigned int Col)
{
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            array[i][j] = i * j;

            if (i % 2 != 0 && j % 2 != 0)
                array[i][j] = -1 * i * j;
        }
    }
}

void PtrMatrix(int* array, unsigned int Row, unsigned int Col)
{
    for (int i = 0; i < (Row * Col) - 1; i++)
    {
        if (*(array + i) < 0)
            printf("%d\n", *(array + i));
    }
}


int main()
{
    printf("Pointer Int: %d\n", sizeof(int*));
    printf("Int: %d\n", sizeof(int));
    int* matrix = (int*)calloc(Zeilen * Spalten, sizeof(int));
    if (matrix != NULL)
    {
        ElMatrix(matrix, Zeilen, Spalten);
        PtrMatrix(matrix, Zeilen, Spalten);
    }
    else
    {
        printf("Kein freier Platz auf dem Heap\n");
    }
}