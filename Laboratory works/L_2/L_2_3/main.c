#include <stdio.h>

int validation(int);
int* create_array(int, int*, int*);

int main(){
    int N = 0;

    scanf("%d", &N);

    if(validation(N)) return 1;

    int arr[N];
    int array_sum[N / 2];

    int* parr = create_array(N, arr, array_sum);

    printf("%d\n", N);
    for(int i = 0; i < N / 2; ++i){
        printf("%5d", parr[i]);
    }

    return 0;
}

int* create_array(int N, int* arr, int* array_sum){


    for(int i = 0; i < N; ++i){
        arr[i] = 0;
    }

    for(int i = 0; i < N / 2; ++i){
        array_sum[i] = 0;
    }

    for(int i = 0, j = 1; i < N / 2; ++i, ++j){
        if(j % 2 == 1){
            arr[i] = j;
            --i;
        }
    }

    for(int i = 0, j = 1; i < (N / 2) + 1; ++i, ++j){
        if(j % 2 == 0){
            arr[N - i] = j;
            --i;
        }
    }

    for(int i = 0; i < N / 2; ++i){
        array_sum[i] += arr[i];
    }

    for(int i = 0; i < N / 2; ++i){
        array_sum[i] += arr[(N - 1) - i];
    }

    return array_sum;
}

int validation(int N){
    if(N < 2 || N > 150){
        printf("%d\nNumber is wrong.", N);
        return 1;
    }
    else if(N % 2 != 0){
        printf("%d\nNumber is uneven.", N);
        return 1;
    }
    return 0;
}