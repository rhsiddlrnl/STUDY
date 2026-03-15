#include <stdio.h>

int main() {
    int N;
    int x, y;

    int min_x = 10001, max_x = -10001;
    int min_y = 10001, max_y = -10001;

    if (scanf("%d", &N) == 0) return 0;

    if (N < 2) {
        scanf("%d %d", &x, &y);
        printf("0\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);

        if (x < min_x) min_x = x;
        if (x > max_x) max_x = x;

        if (y < min_y) min_y = y;
        if (y > max_y) max_y = y;
    }

    long long width = max_x - min_x;
    long long height = max_y - min_y;

    printf("%lld\n", width * height);

    return 0;
}