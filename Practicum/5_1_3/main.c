#include <stdio.h>

int main()
{
    int arr[10];
    int* pInt = 0;
    int sum = 0;

    for(int i = 0; i < 10; ++i)
        scanf("%d", &arr[i]);

    pInt = arr;

    for(int i = 0; i < 10; ++i)
        sum += *pInt++;

    printf("sum: %d", sum);

    return 0;
}