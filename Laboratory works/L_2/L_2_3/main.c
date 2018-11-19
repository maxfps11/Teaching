#include <stdio.h>
#include <stdlib.h>

int validation(int);
int* create_array(int);

int main(){
    int* pInt = calloc(1, 4);

    scanf("%d", &pInt[0]);

    if(validation(pInt[0]))
        return 1;

    for(int i = 0, j = pInt[0]; i < j / 2; ++i){
        if(i == 0){
            free(pInt);
            pInt = create_array(j);
        }
        printf("%5d", pInt[i]);
    }

    free(pInt);
    return 0;
}

int* create_array(int val){
    int* pInt = calloc((size_t)(val), 4);
    int* pInt1 = calloc((size_t)(val / 2), 4);

    printf("%d\n", val);

    for(int i = 0, j = 1; i < val / 2; ++i, ++j){
        if(j % 2 == 1){
            pInt[i] = j;
            --i;
        }
    }

    for(int i = 0, j = 1; i < (val / 2) + 1; ++i, ++j){
        if(j % 2 == 0){
            pInt[val - i] = j;
            --i;
        }
    }

    for(int i = 0; i < val / 2; ++i){
        pInt1[i] += pInt[i];
        pInt1[i] += pInt[(val - 1) - i];
    }

    free(pInt);
    return pInt1;
}

int validation(int val){
    if(val < 2 || val > 150){
        printf("%d\nNumber is wrong.", val);
        return 1;
    }
    else if(val % 2 != 0){
        printf("%d\nNumber is uneven.", val);
        return 1;
    }
    return 0;
}