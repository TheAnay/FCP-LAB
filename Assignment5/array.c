#include <stdio.h>

int main() {
    /* Variable Declaration & Initialization */
    int arr[10] = {12, 45, 7, 23, 56}; 
    int n = 5; /* Initial number of elements */
    int choice, val, pos, i, j, temp, found;

    /* Display current array elements */
    printf("Initial Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    /* Menu options */
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Search\n");
    printf("4. Sort\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        /* Insertion */
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);

            arr[n] = val;
            n++;

            printf("Array after insertion: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        /* Deletion */
        case 2:
            printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= n) {
                printf("Invalid position!\n");
            } else {
                /* Shift elements to the left */
                for (i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;

                /* Display updated array */
                printf("Array after deletion: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        /* Search */
        case 3:
            printf("Enter value to search: ");
            scanf("%d", &val);
            found = -1;

            /* Linear Search */
            for (i = 0; i < n; i++) {
                if (arr[i] == val) {
                    found = i;
                    break;
                }
            }

            if (found != -1) {
                printf("Element %d found at %d.\n", val, found);
            } else {
                printf("Element %d not found.\n", val);
            }
            break;

        /*Sort */
        case 4:
            /* Bubble Sort */
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            /* Display sorted array */
            printf("Array after sorting: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

    }

    return 0;
}