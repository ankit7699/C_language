#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

void displayPrimes(int start, int end) {
    for(int i = start; i <= end; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int start, end;
    
    printf("Enter the start number: ");
    scanf("%d", &start);
    printf("Enter the end number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    displayPrimes(start, end);
    
    return 0;
}
