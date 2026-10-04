#include <stdio.h>

int getX() {
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    return x;
}

int isZero(int x) {
    return !x;
}

int main() {
    int x = getX();

    printf("isZero(%d) = %d\n", x, isZero(x));

    return 0;
}
