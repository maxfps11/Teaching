#include <stdio.h>

int main()
{
    int value = 0;

    scanf("%x", &value);

    printf("%d", value);

    short sh_value = value;
    printf("\n%d", sh_value);

    char ch_value = sh_value;
    printf("\n%d", ch_value);

    return 0;
}