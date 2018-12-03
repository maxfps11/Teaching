#include <stdio.h>

int main() {

    const short MAX = 10;
    int arr[MAX] = {0};
    int *pInt = NULL;
    int sum = 0;

    for (int i = 0; i < MAX; ++i) {
        scanf("%d", &arr[i]);
    }

    pInt = arr;

    for (int i = 0; i < MAX; ++i) {
        sum += *(pInt + i);
    }

    printf("sum: %d", sum);

    return 0;
}