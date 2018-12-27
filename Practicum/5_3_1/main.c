#include <stdio.h>

int** add(int n, int m, int A[][m], int B[][m], int C[][m]);

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

    add(n, m, matrix_A, matrix_B, matrix_C);

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            printf("%5d", matrix_C[i][j]);
        }

        if(i != n - 1)
            printf("\n");
    }

    return 0;
}

int** add(int n, int m, int A[][m], int B[][m], int C[][m])
{
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            C[i][j] = A[i][j] + B[i][j];

    return (int**) C[0][0];
}
