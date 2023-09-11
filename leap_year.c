#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; // True, it is a leap year
    } else {
        return 0; // False, it's not a leap year
    }
}

int main() {
    int year;
    
    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if it's a leap year and display the result
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}



