#include <stdio.h>

int main() {
    int N, K;
    int count = 0;

    if (scanf("%d %d", &N, &K) == 0) return 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
            if (count == K) {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    printf("0\n");

    return 0;
}