#include <stdio.h>

int main() {
    float marks, percentage;

    // Taking marks as input
    printf("Enter the marks obtained by the student: ");
    scanf("%f", &marks);

    // Assuming maximum marks are 100, calculating percentage
    percentage = (marks / 100) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    // Decision based on percentage
    if (percentage >= 75) {
        printf("First Division\n");
    } else if (percentage >= 50 && percentage < 75) {
        printf("Second Division\n");
    } else if (percentage >= 35 && percentage < 50) {
        printf("Third Division\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}