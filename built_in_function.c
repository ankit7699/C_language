#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main() {
    printf("Demonstration of 20 library functions in C:\n\n");

    // 1. printf
    printf("1. printf(): Used to display text or data.\n");

    // 2. scanf
    int number;
    printf("2. scanf(): Enter an integer: ");
    scanf("%d", &number);
    printf("You entered: %d\n", number);

    // 3. getchar
    printf("3. getchar(): Press any key to continue.\n");
    getchar(); // Absorb the Enter key from the previous input
    getchar(); // Actual wait for the key press

    // 4. putchar
    char c = 'A';
    printf("4. putchar(): ");
    putchar(c);
    printf("\n");

    // 5. strlen
    char str[] = "OpenAI";
    printf("5. strlen(): Length of '%s' is %zu.\n", str, strlen(str));

    // 6. strcpy
    char destination[20];
    strcpy(destination, str);
    printf("6. strcpy(): Copied string is %s.\n", destination);

    // 7. strcat
    char source[] = " is awesome!";
    strcat(destination, source);
    printf("7. strcat(): Concatenated string is %s.\n", destination);

    // 8. strcmp
    if (strcmp("apple", "banana") < 0) {
        printf("8. strcmp(): 'apple' comes before 'banana'.\n");
    }

    // 9. isdigit
    printf("9. isdigit(): Is '5' a digit? %s.\n", isdigit('5') ? "Yes" : "No");

    // 10. isalpha
    printf("10. isalpha(): Is 'c' an alphabet? %s.\n", isalpha('c') ? "Yes" : "No");

    // 11. tolower
    printf("11. tolower(): Uppercase 'D' to lowercase is '%c'.\n", tolower('D'));

    // 12. toupper
    printf("12. toupper(): Lowercase 'm' to uppercase is '%c'.\n", toupper('m'));

    // 13. strstr
    char *substr = strstr(destination, "awesome");
    if(substr) {
        printf("13. strstr(): Found substring 'awesome' in '%s'.\n", destination);
    }

    // 14. strchr
    char *ch_location = strchr(destination, 'O');
    if(ch_location) {
        printf("14. strchr(): 'O' is found in the string '%s'.\n", destination);
    }

    // 15. strrchr
    ch_location = strrchr(destination, 's');
    if(ch_location) {
        printf("15. strrchr(): Last occurrence of 's' is found in the string '%s'.\n", destination);
    }

    // 16. atoi
    char number_str[] = "42";
    int converted_number = atoi(number_str);
    printf("16. atoi(): String '42' to integer is %d.\n", converted_number);

    // 17. puts
    printf("17. puts(): ");
    puts("This is displayed using puts function.");

    // 18. gets (Note: gets is unsafe and deprecated, but for the sake of this simple demonstration, I'm using it)
    char user_input[50];
    printf("18. gets(): Enter a small string: ");
    gets(user_input); // Be cautious: can lead to buffer overflows
    printf("You entered: %s\n", user_input);

    // 19. abs
    printf("19. abs(): Absolute value of -7 is %d.\n", abs(-7));

    // 20. sprintf
    char buffer[50];
    sprintf(buffer, "20. sprintf(): Number %d as a string.", 100);
    printf("%s\n", buffer);

    return 0;
}
