#include <stdio.h>

int main() {
    int A[3][3], B[3][3], sum[3][3];
    int i, j;

    /* Input elements for the 1st matrix */
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    /* Input elements for the 2nd matrix */
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* Adding the 2 matrices */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    /* Displaying the result */
    printf("\nSum of Matrix A and Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}