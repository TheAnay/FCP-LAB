#include <stdio.h>

/* Function to calculate GCD */
int f_gcd(int a, int b) {
    int temp;
    int gcd; 
    
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    gcd = a; 
    return gcd; 
}

/* Function to calculate LCM */
int f_lcm(int a, int b) {
    int lcm; 
    
    /* Calculate using the formula: (a * b) / GCD */
    lcm = (a * b) / f_gcd(a, b);
    
    return lcm;
}

int main() {
    int n1, n2;
    int gcd_result, lcm_result;

    /* Input section */
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    /* Function Calling */
    gcd_result = f_gcd(n1, n2);
    lcm_result = f_lcm(n1, n2);

    /* Output section */
    printf("GCD of %d and %d = %d\n", n1, n2, gcd_result);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm_result);

    return 0;
}