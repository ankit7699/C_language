#include <stdio.h>

void printMessage() {
    printf("This is a simple function.\n");
}

int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void callByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void callByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    
    printMessage();
    
    printf("Sum of %d and %d is %d\n", num1, num2, add(num1, num2));
    printf("Factorial of 5 is %d\n", factorial(5));

    int x = 10, y = 20;
    callByValue(x, y);
    printf("After Call by Value: x = %d, y = %d\n", x, y);
    callByReference(&x, &y);
    printf("After Call by Reference: x = %d, y = %d\n", x, y);

    return 0;
}
