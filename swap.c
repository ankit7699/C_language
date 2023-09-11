#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x, y;

    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);

    swap(&x, &y);

    printf("Swapped values: %d %d\n", x, y);

    return 0;
}
