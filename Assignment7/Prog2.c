#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int sum = 0, sub, mul = 1;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));   /* allocate memory for n integers */

    if (ptr == NULL)   /* check if memory was allocated */
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);   /* store each number using the pointer */
    }

    printf("\nElements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    sub = *ptr;   /* subtraction starts with the first element */

    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);   /* add all elements */
        mul = mul * *(ptr + i);   /* multiply all elements */

        if (i > 0)
        {
            sub = sub - *(ptr + i);   /* subtract the remaining elements from the first */
        }
    }

    printf("\nSum = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\n");

    free(ptr);   /* release the memory */

    return 0;
}