#include <stdio.h>

int main() {
    int m = 0;
    int n = 0;

    scanf("%d %d", &n, &m);

    int pInt[n];
    int pInt1[n];


    if(n <= 2)
    {
        printf("n is wrong: %d", n);
        return 1;
    }
    else if(m <= 0)
    {
        printf("m is wrong: %d", m);
        return 2;
    }

    for (int i = 0; i < n; ++i)
    {
        pInt[i] = i + 1;
        pInt1[i] = i + 1;
    }

    int save_1 = 0;

    for (int i = 0; i < m ; ++i)
    {
        save_1 = pInt[0];

        for(int j = 0; j < n - 1; ++j)
        {
            pInt[j] = pInt1[j + 1];
        }

        pInt[n - 1] = save_1;

        for(int k = 0; k < n; ++k)
        {
            pInt1[k] = pInt[k];
        }
    }

    printf("n = %d; m = %d\n", n, m);

    for(int i = 0; i < n; ++i)
        printf("%4d", pInt[i]);

    return 0;
}
