#include <stdio.h>

int main() {
    /* Variable decleration */
    int num, i, isPrime = 1;

    /* Input section */
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /* Prime checking logic */
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0; // Found a factor, so it's not prime
            break;
        }
    }

    /* Output section */
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}