#include <stdio.h>

int main() 
{
    int n, sum = 0;

    // Input number from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate sum of digits
    while (n != 0) {
        sum += n % 10; // Add last digit to sum
        n /= 10;       // Remove last digit
    }

    // Output the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}