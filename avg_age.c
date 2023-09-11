#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    // Input number of employees
    printf("Enter total no.of employees:\n");
    scanf("%d", &n);

    // Check for minimum number of employees
    if(n < 2) {
        printf("Please enter a valid employee count\n");
        return 0;
    }
    
    int ages[n];
    
    // Input ages of employees
    printf("Enter the age for %d employees:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &ages[i]);
        
        // Check if age is within the valid range
        if(ages[i] < 28 || ages[i] > 40) {
            printf("Invalid age encountered!\n");
            return 0;
        }
        
        sum += ages[i];
    }

    // Calculate average
    average = sum / n;
    printf("The average age is %.2f\n", average);
    
    return 0;
}
