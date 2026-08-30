#include <stdio.h>

int main() {
    char op;
    float a, b, sum, diff, product, division;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    sum = a + b;
    diff = a - b;
    product = a * b;
    
    if (op == '+') {
        printf("Result: %f\n", sum); 
    } 
    else if (op == '-') {
        printf("Result: %f\n", diff);
    } 
    else if (op == '*') {
        printf("Result: %f\n", product);
    } 
    else if (op == '/') {
        if (b == 0) {
            printf("Error! Division by zero is not allowed.\n");
        } else {
            division = a / b;
            printf("Result: %f\n", division);
        }
    } 
    else {
        printf("Error! Invalid operator.\n");
    }

    return 0;
}