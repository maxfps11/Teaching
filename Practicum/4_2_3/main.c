#include <stdio.h>

int main()
{
    char ch = 0;
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch == 'a' || ch == 'A'
        || ch == 'e' || ch == 'E'
        || ch == 'i' || ch == 'I'
        || ch == 'o' || ch == 'O'
        || ch == 'u' || ch == 'U'
        || ch == 'y' || ch == 'Y')
        {
            printf("vowel");
        }
        else
            printf("consonant");
    }
    else
        printf("Not letter");

    return 0;
}