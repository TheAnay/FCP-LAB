#include <stdio.h>
int main() {
/* Variable decleration */
char op;
float a, b, sum, diff, product, division;
/* Input section */
printf("Enter two numbers: ");
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
return 0;
}