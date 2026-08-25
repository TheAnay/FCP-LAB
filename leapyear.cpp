#include <stdio.h>

int main() {
    int year;

    // Prompt the user for input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    // 1. A year is a leap year if it is divisible by 4.
    // 2. If it is a century year (divisible by 100), it must also be divisible by 400.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}