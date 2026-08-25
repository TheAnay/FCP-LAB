#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    a = x;
    b = y;

    // Find GCD using the Euclidean algorithm (while loop)
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    // Find LCM using the formula: (Number1 * Number2) / GCD
    lcm = (x * y) / gcd;

    // Output the results
    printf("GCD of %d and %d = %d\n", x, y, gcd);
    printf("LCM of %d and %d = %d\n", x, y, lcm);

    return 0;
}