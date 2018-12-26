#include <stdio.h>

int main()
{
    int value = 0;

    do
    {
        scanf("%d", &value);

        if(value > 0)
            printf("%d ", value);

    }while(value != 0);

    return 0;
}