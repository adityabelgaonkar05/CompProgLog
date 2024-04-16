#include <stdio.h>
#include <stdlib.h>

void transpose(int **matrix, int rows, int cols)
{
    int i, j;
    int **transpose;
    transpose = (int **)malloc(cols * sizeof(int *));

    for (i = 0; i < cols; i++)
    {
        transpose[i] = (int *)malloc(rows * sizeof(int));
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++)
    {
        for (j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < cols; i++)
    {
        free(transpose[i]);
    }
    free(transpose);
}

int main()
{
    int i, j, rows, cols;
    int **matrix;
    printf("Aditya Belgaonkar 16010123026\n");

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    matrix = (int **)malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(matrix, rows, cols);

    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
