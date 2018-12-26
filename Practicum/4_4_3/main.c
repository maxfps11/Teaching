#include <stdio.h>

int main()
{
    long long int val = 0;
    int count = 0;

    scanf("%lli", &val);

    while(count++, (val /= 10) > 0 || (val < 0));

    printf("Number of digits: %d", count);

    return 0;
}