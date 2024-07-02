#include <stdio.h>

int main()
{
    int mat[10][10];
    int x,y;
    printf("Enter no. of rows: ");
    scanf("%d", &x);
    printf("Enter no. of columns: ");
    scanf("%d", &y);
    printf("Enter elements in the matrix:\n");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = j + 1; k < y; k++)
            {
                if (mat[i][j] > mat[i][k])
                {
                    int temp = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = temp;
                }
            }
        }
    }

    printf("After sorting rows:\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            for (int k = j + 1; k < x; k++)
            {
                if (mat[j][i] < mat[k][i])
                {
                    int temp = mat[j][i];
                    mat[j][i] = mat[k][i];
                    mat[k][i] = temp;
                }
            }
        }
    }

    printf("After sorting coloums:\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
