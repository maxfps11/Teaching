#include <stdio.h>

int main()
{
    int value = 0;

    scanf("%d", &value);

    int sum = 0;

    if(value > 0)
    {
        for(int i = 1; i <= value; i++)
        {
            sum += i;
        }

        printf("Sum_n = %d", sum);
    }
    else
        printf("n is wrong (%d)", sum);

    return 0;
}