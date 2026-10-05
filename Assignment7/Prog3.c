#include <stdio.h>
#include <stdlib.h> 

int main() {
    /* Variable decleration */
    int *ptr;
    
    /* Memory allocation */
    ptr = (int*) malloc(3 * sizeof(int));
    
    /* Storing values in the allocated memory */
    ptr[0] = 50;
    ptr[1] = 60;
    ptr[2] = 70;
    
    /* Output section */
    printf("First dynamically allocated value: %d\n", ptr[0]);
    printf("Second dynamically allocated value: %d\n", ptr[1]);
    
    /* Releasing the memory back to the system */
    free(ptr);
    
    return 0;
}