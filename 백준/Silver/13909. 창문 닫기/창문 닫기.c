#include <stdio.h>
#include <math.h>

int main() {
    int N;

    if (scanf("%d", &N) == 0) return 0;

    printf("%d\n", (int)sqrt(N));

    return 0;
}