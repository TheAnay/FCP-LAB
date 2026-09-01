#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (1 to 10): ");
    scanf("%d", &num);

    // Decimal values and Roman symbols up to 10 (X)
    int values[] = {10, 9, 5, 4, 1};
    char *symbols[] = {"X", "IX", "V", "IV", "I"};

    printf("Roman numeral: ");
    for (int i = 0; i < 5; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }
    printf("\n");

    return 0;
}