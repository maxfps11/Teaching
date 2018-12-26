#include <stdio.h>

int sum(unsigned const int n, unsigned const int m, const int matrix[n][m])
{
    if(n > 0)
    {
        int result = 0;
        for(int i = 0; i < m; i++)
        {
            result += matrix[n - 1][i];
        }
        return result + sum(n - 1, m, matrix);
    }
    else
        return 0;
}

int main()
{
    unsigned int n = 0;
    unsigned int m = 0;

    scanf("%d %d", &n, &m);

    if(n < 1)
    {
        printf("n is wrong: (%d)", n);
        return 1;
    }
    else if(m < 1)
    {
        printf("m is wrong: (%d)", m);
        return 2;
    }
    else
    {
        int matrix[n][m];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                matrix[i][j] = (i + 1) * (j + 1);
            }
        }

        printf("sum = %d", sum(n, m, matrix));
        return 0;
    }
}