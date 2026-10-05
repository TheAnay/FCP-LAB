#include <stdio.h>

int main()
{
    /* Variable decleration */
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    int i, num;

    p = arr;   

    /* Printing of array */  
    printf("Array elements using pointer:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));   
    }
    
    /* Input Section */
    printf("\n\nEnter the number to increment each element by: ");
    scanf("%d", &num);

    /*  Modifying elements using pointer */
    for (i = 0; i < 5; i++)
    {
        *(p + i) = *(p + i) + num;   
    }

    /* Output Section */
    printf("\nArray elements after modification:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i] );  
    }

    return 0;
}