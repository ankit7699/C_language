#include<stdio.h>
int main() {
    int lower, upper;

    // Get lower and upper limits from user
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    // Print odd numbers between lower and upper
    printf("Odd numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
