#include <stdio.h>

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display whether the number is positive, negative, or zero
    if(num > 0) {
        printf("The number is positive.\n");
    } else if(num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}