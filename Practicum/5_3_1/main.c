#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;

    scanf("%d%d", &n, &m);

    int matrix_A[n][m];
    int matrix_B[n][m];
    int matrix_C[n][m];

    for(int i = 0, k = 1; i < n; ++i)
    {
        for(int j = 0; j < m; ++j, k++)
        {
            matrix_A[i][j] = k;
        }
    }

    for(int i = 0, k = 1; i < m; ++i)
    {
        for(int j = 0; j < n; ++j, k++)
        {
            matrix_B[j][i] = k;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
            printf("%5d", matrix_C[i][j]);
        }
        if(i != n - 1)
            printf("\n");
    }

    return 0;
}