#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    int *px, *py;

    // Assigning address of x and y to px and py
    px = &x;
    py = &y;

    printf("Value of x: %d, Value at address stored in px: %d\n", x, *px);
    printf("Value of y: %d, Value at address stored in py: %d\n", y, *py);

    // Pointer arithmetic
    printf("\nPointer Arithmetic:\n");
    int arr[5] = {1, 2, 3, 4, 5};
    int *parr = arr;

    printf("Address parr: %p, Value: %d\n", parr, *parr);
    parr++;
    printf("Address parr after increment: %p, Value: %d\n", parr, *parr);

    // Array and pointers
    printf("\nArray and Pointers:\n");
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] Address: %p, Value: %d\n", i, &arr[i], *(arr + i));
    }

    // Using function with pointers
    printf("\nBefore swap - x: %d, y: %d\n", x, y);
    swap(&x, &y);
    printf("After swap using pointers - x: %d, y: %d\n", x, y);

    return 0;
}
