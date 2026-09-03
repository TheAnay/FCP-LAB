#include <stdio.h>

int main() {
    /* Variable decleration */
    int n, i;
    int factorial = 1;

    /* Input section */
    printf("Enter a integer: ");
    scanf("%d", &n);

    /* Factorial Logic */
    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
        /* Output section */
    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}