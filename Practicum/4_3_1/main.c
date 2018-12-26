#include <stdio.h>

int main()
{
    int val = 0;
    scanf("%d", &val);

    switch(val)
    {
    case 1:
        printf("A");
        break;
    case 3:
    case 4:
        printf("B");
        break;
    case 7:
        printf("H");
        break;
    default:
        printf("E");
        break;
    }

    return 0;
}