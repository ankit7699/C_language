#include <stdio.h>

int main() {
    int numbers[5];  // Declare an array of 5 integers
    int i;

    // Assign values to the array using a for loop
    for(i = 0; i < 5; i++) {
        numbers[i] = i * i;  // Storing squares of numbers 0 to 4
    }

    // Print the values of the array using another for loop
    for(i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
