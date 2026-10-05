#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    int i, num;

    p = arr;   /* p now stores the address of the first element */

    printf("Array elements using pointer:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));   /* *(p + i) gives the value of each element */
    }

    /* take the number to be added from the user */
    printf("\n\nEnter the number to increment each element by: ");
    scanf("%d", &num);

    /* modifying elements using pointer */
    for (i = 0; i < 5; i++)
    {
        *(p + i) = *(p + i) + num;   /* add the user's number to each element */
    }

    printf("\nArray elements after modification:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] );   /* array shows the changed values */
    }

    return 0;
}