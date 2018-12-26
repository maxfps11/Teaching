#include <stdio.h>

char* create_and_clear()
{
    static char string[101];
    char* pstring = string;
    while(*pstring++ != '\0') *pstring = 0;
    return pstring;
}

int main()
{
    char* str = create_and_clear();
    unsigned int count = 0;

    scanf("%s", str);

    while(str[count]) count++;

    printf("Length: %d", count);

    return 0;
}