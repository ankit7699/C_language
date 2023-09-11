#include <stdio.h>

int main() {
    int cse, ece, mech;

    // Taking inputs for each department
    printf("Enter the no of students placed in CSE:");
    scanf("%d", &cse);

    printf("Enter the no of students placed in ECE:");
    scanf("%d", &ece);

    printf("Enter the no of students placed in MECH:");
    scanf("%d", &mech);

    // Checking for negative input values
    if(cse < 0 || ece < 0 || mech < 0) {
        printf("Input is Invalid\n");
        return 0;
    }

    printf("Highest placement\n");

    // Checking the highest placements
    if(cse > ece && cse > mech) {
        printf("CSE\n");
    } else if(ece > cse && ece > mech) {
        printf("ECE\n");
    } else if(mech > cse && mech > ece) {
        printf("MECH\n");
    } else if(cse == ece && cse == mech) {
        printf("None of the department has got the highest placement\n");
    } else {
        if(cse == ece) {
            printf("CSE\nECE\n");
        } else if(cse == mech) {
            printf("CSE\nMECH\n");
        } else if(ece == mech) {
            printf("ECE\nMECH\n");
        }
    }

    return 0;
}
