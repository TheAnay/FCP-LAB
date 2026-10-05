#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Variable decleration */
    int n, i;
    int sum = 0, sub, mul = 1;
    int *ptr;

    /* Input section */
    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* allocate memory for n integers */
    ptr = (int *)malloc(n * sizeof(int));   

    /* checking if memory was allocated */
    if (ptr == NULL)   
    {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    /* store each number using the pointer */
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);   
    }

    printf("\nElements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    sub = *ptr;   

     /* Arithmatic Operations */
    for (i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);   
        mul = mul * *(ptr + i);  

        if (i > 0)
        {
            sub = sub - *(ptr + i);   
        }
    }

    /* Output Section */
    printf("\nSum = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\n");

    free(ptr);   

    return 0;
}