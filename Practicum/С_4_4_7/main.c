#include <stdio.h>

int main()
{
    int value = 0;

    scanf("%d", &value);

    if(value > 0 && value < 10)
    {
        for(int i = 1; i <= value; i++)
        {
            if(i != 1)
                printf("\n");

            for(int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
    }
    else
        printf("N is wrong: %d", value);

    return 0;
}