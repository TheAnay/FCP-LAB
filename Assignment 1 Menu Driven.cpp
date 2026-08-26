#include <stdio.h>

int main() {
    int choice;

    /* Menu Section */
    printf("1. Hello World Program\n");
    printf("2. Calculator Program\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    /* Selection Logic */
    switch (choice) {
        case 1:
            /* Program 1: Hello World */
            /* Output Section */
            printf("\nHello World\n");
            break;

        case 2:
            /* Program 2: Calculator */
            {
                /* Variable decleration */
                char op;
                float a, b, sum, diff, product, division;

                /* Input section */
                printf("\nEnter two numbers: ");
                scanf("%f %f", &a, &b);

                printf("Enter an operator (+, -, *, /): ");
                scanf(" %c", &op);

                /* Calculation section */
                sum = a + b;
                diff = a - b;
                product = a * b;

                /* Output section based on selected operator. */
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
                    /* Division Zero Check */
                    if (b == 0) {
                        printf("Error! Division by zero is not allowed.\n");
                    } 
                    else {
                        division = a / b;
                        printf("Result: %f\n", division);
                    }
                } 
                else {
                    printf("Error! Invalid operator selected.\n");
                }
            }
            break;

        default:
            /* Invalid Menu Selection Handling */
            printf("\nError! Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}