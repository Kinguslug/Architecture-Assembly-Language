#include <stdio.h>

int rightrot(int x, int n) {
    n = n % 32;

    if (n == 0) {
        return x;
    }

    int result = (x >> n) | (x << (32 - n));

    return result;
}

int main() {
    int x;
    int n;

    printf("Please enter an integer in hex: ");
    scanf("%i", &x);

    printf("\nPlease enter how many rotations: ");
    scanf("%d", &n);

    int result = rightrot(x, n);

    printf("Result: %X\n", result);

    return 0;
}
