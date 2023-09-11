#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;
        case '/':
            if(num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        case '%':
            if((int)num2 != 0) {
                printf("%d %c %d = %d\n", (int)num1, operator, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
    }

    return 0;
}
