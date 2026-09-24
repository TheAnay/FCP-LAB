#include <stdio.h>

int main() {
    int A[3][3], B[3][3], mult[3][3];
    int i, j, k;

    /* Input elements for the 1st matrix */
    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    /* Input elements for the 2nd matrix */
    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* Multiplication */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mult[i][j] = 0; 
            for (k = 0; k < 3; k++) {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    /* Displaying of result */
    printf("\nProduct of Matrix A and Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}