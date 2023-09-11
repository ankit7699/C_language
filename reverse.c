#include <stdio.h>

int main() {
    int n, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
