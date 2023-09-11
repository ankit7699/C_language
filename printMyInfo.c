#include <stdio.h>

int main() {
    // Information
    char name[] = "Ankit Kumar";
    char college[] = "BIT Mesra, Ranchi";
    char degree[] = "B.Tech in EEE";
    char hobbies[] = "Digital Art";
    
    // Printing the information with boxes
    printf("╔══════════════════════════════════════════════╗\n");
    printf("║ Name:    %-35s ║\n", name);
    printf("║ College: %-35s ║\n", college);
    printf("║ Degree:  %-35s ║\n", degree);
    printf("║ Hobbies: %-35s ║\n", hobbies);
    printf("╚══════════════════════════════════════════════╝\n");

    return 0;
}