#include <stdio.h>

int f(int n, int m)
{
    if(n <= m)
    {
        printf("%d ", f(n, m - 1));
    }
        return m + 1;
}

int main()
{
    int n = 0;
    int m = 0;

    scanf("%d %d", &n, &m);

    if(n > m)
        printf("n and m is wrong.");
    else
        f(n, m);

    return 0;
}