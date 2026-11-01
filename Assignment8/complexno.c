#include <stdio.h>

/* Variable decleration */
struct Complex {
    float real;
    float imag;
};

/* Input section */
int main() {
    struct Complex c1, c2, sum, mult;

    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    /* Addition */
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    /* Multiplication */
    mult.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    mult.imag = (c1.real * c2.imag) + (c1.imag * c2.real);

    /* Output section */
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Multiplication = %.2f + %.2fi\n", mult.real, mult.imag);

    return 0;
}