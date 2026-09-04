#include <stdio.h>

/* Function to calculate the sum of digits. */
int add(int n) {
    int sum = 0;

    /* Sum of Digit Logic */
    while (n > 0) {
        sum += n % 10;  // Extract the last digit and add to sum
        n /= 10;        // Remove the last digit from the number
    }

    return sum;
}

int main() {
    int num;

    /* Input section */
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /* Output section */
    printf("Sum of digits of %d is %d\n", num, add(num));

    return 0;
}