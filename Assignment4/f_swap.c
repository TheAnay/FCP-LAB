#include <stdio.h>

/* Function for call by value */
int swap_value(int a, int b) {
    int temp;
    
    /* Swapping logic */
    temp = a;
    a = b;
    b = temp;
    
    return 0;
}

/* Function for call by reference */
int swap_ref(int *a, int *b) {
    int temp;
    
    /* Swapping logic using pointers */
    temp = *a;
    *a = *b;
    *b = temp;
    
    return 0;
}

int main() {
    /* Variable declaration */
    int n1, n2;

    /* Input section */
    printf("Enter first number (n1): ");
    scanf("%d", &n1);
    printf("Enter second number (n2): ");
    scanf("%d", &n2);

    printf("\nStarting numbers: n1 = %d, n2 = %d\n", n1, n2);

    /* Testing call by value */
    swap_value(n1, n2);
    printf("After swap_value: n1 = %d, n2 = %d\n", n1, n2);

    /* Testing call by reference */
    swap_ref(&n1, &n2);
    printf("After swap_ref  : n1 = %d, n2 = %d\n", n1, n2);

    return 0;
}