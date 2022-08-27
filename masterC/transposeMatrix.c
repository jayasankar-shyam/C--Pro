#include <stdio.h>
void main()
{
    int row, col, i, j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d", &row, &col);
    int mat[row][col];
    printf("Enter the matrix : ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nOriginal\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }
}

// 1 2 3 
// 4 5 6
// 7 8 9

// 1 4 7
// 2 5 8
// 3 6 9