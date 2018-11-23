#include <stdio.h>
#include <stdlib.h>

int validation(int);
int* create_array(int);

int main(){
    int* pInt = calloc(1, sizeof(int));

    scanf("%d", &pInt[0]);

    for(int i = 0, j = validation(pInt[0]); i < j / 2; ++i){
        if(!i){
            free(pInt);
            pInt = create_array(j);
        }
        printf("%5d", pInt[i]);
    }

    free(pInt);
    return 0;
}

int* create_array(int val){
    int* pInt = calloc((size_t)val, sizeof(int));
    int* pInt1 = calloc((size_t)(val / 2), sizeof(int));

    printf("%d\n", val);

    for(int i = 0, j = 1; i < val / 2; ++i, ++j){
        if(j % 2 == 1){
            pInt[i] = j;
            --i;
        }
    }

    for(int i = 0, j = 1; i < (val / 2) + 1; ++i, ++j){
        if(!(j % 2)){
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
        exit(1);
    }
    else if(val % 2){
        printf("%d\nNumber is uneven.", val);
        exit(1);
    }
    else return val;
}