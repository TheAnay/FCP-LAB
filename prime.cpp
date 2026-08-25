#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check for factors from 2 up to num - 1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Found a factor, so it's not prime
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}