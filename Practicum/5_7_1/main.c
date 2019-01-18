#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    scanf("%d", &n);

    if(n > 0){
        int* vec = (int*) calloc((size_t) n, sizeof(n));

        int m = 0;
        for(size_t i = 0; i < n; i++){
            scanf("%d", &m);
            vec[i] = m;
        }

        int size = n;

        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if(vec[i] == vec[j]){
                    for(int k = j; k < size - 1; k++){
                        vec[k] = vec[k + 1];
                    }
                    size -= 1;

                    if(vec[i] == vec[j]){
                        j--;
                    }
                }
            }
        }

        printf("%d", vec[0]);

        for(size_t i = 1; i < size; i++){
            printf(" %d", vec[i]);
        }
    } else
        printf("N is wrong (%d)", n);

    return 0;
}