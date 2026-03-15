#include <stdio.h>

int main() {
    int a, b, c;

    if (scanf("%d %d %d", &a, &b, &c) == 0) return 0;

    if (a + b + c != 180) {
        printf("Error\n");
    } 

    else {
        if (a == 60 && b == 60 && c == 60) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }

    return 0;
}