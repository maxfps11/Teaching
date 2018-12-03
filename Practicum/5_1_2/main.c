#include <stdio.h>

int main() {

    const short MAX = 101;

    char str[MAX] = { 0 };

    short count = 0;

    scanf("%s", str);

    for (int i = 0; i < MAX; ++i) if(str[i] != 0) count++;

    printf("\nLength: %d", count);

    return 0;
}