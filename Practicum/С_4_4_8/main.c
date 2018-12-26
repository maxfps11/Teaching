#include <stdio.h>

int main()
{
    int value   = 0;
    int count   = 0;
    int count1  = 0;

    while(value != -9999)
    {
        scanf("%d", &value);

        count++;

        if(value > 0)
        {
            count1++;
        }
    }

    if(count - 1 == count1)
        printf("YES");
    else
        printf("NO");

    return 0;
}