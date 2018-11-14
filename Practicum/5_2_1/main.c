#include <stdio.h>

int main(){
    const int MAX = 100;
    char prev[MAX] = {0};
    char after[MAX] = {0};

    scanf("%s", prev);

    for(int i = 0, j = 0; prev[i] != '\0' ; ++i){
        if(prev[i] >= '0' && prev[i] <= '9'){
            after[j] = prev[i];
            j++;
        }
    }

    printf("Before: %s\n", prev);
    printf("After: %s", after);

    return 0;
}