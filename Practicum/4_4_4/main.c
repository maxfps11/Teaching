#include <stdio.h>

int main()
{
    int val = 0;
    long long int fact = 1;

    scanf("%d", &val);

    if(val > 0)
    {
        printf("factorial: %d = ", val);

        for(; val > 0; --val)
            fact *= val;

        printf("%lli", fact);
    }
    else if(val == 0)
    {
        printf("factorial: 0 = 1");
    }
    else
        printf("Number is wrong (%d)", val);


    return 0;
}