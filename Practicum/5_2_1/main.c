#include <stdio.h>

#define MAX 100

int main(){
    char arr[MAX];

    for(int i = 0; i < MAX; ++i)
        arr[i] = 0;

    scanf("%s", arr);

    printf("Before: %s\n", arr);

    for(int i = 0; arr[i]; ++i){
        if(arr[i] < '0' || arr[i] > '9')
            arr[i] = '\0';
    }

    printf("After: ");
    for(int i = 0; i < MAX; ++i){
        if(arr[i] != '\0') printf("%c", arr[i]);
    }

    return 0;
}
