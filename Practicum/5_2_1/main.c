#include <stdio.h>

int main(){
    char arr[100];

    for(int i = 0; i < 100; ++i)
        arr[i] = 0;

    scanf("%s", arr);

    printf("Before: %s\nAfter: ", arr);

    for(int i = 0; arr[i]; ++i)
    {
        if(arr[i] < '0' || arr[i] > '9')
        {
            arr[i] = '\0';
        }
    }

    for(int i = 0; i < 100; ++i)
    {
        if(arr[i] != '\0')
        {
            printf("%c", arr[i]);
        }
    }

    return 0;
}