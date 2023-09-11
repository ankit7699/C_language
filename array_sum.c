#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    
    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input numbers from user and store them in the array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the numbers
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
