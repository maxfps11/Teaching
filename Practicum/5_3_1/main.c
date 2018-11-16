#include <stdio.h>

int addition(int, int m, int[][m], int[][m], int[][m]);

int main(){
    int n = 0;
    int m = 0;

    scanf("%d%d", &n, &m);

    int matrix_A[n][m];
    int matrix_B[n][m];
    int matrix_C[n][m];

    for(int i = 0, k = 1; i < n; ++i){
        for(int j = 0; j < m; ++j, k++){
            matrix_A[i][j] = k;
            matrix_B[i][j] = matrix_A[i][j];
        }
    }

    return addition(n, m, matrix_A, matrix_B, matrix_C);
}

int addition(int n, int m, int matrix_A[][m], int matrix_B[][m], int matrix_C[][m]){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
            printf("%5d", matrix_C[i][j]);
        }
        if(i != --n)
            printf("\n");
    }
    return 0;
}