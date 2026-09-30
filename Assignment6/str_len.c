#include <stdio.h>

int main()
{
    /* Variable decleration */
    char str[100];
    int i = 0;

    /* Input the string */
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    /* Count characters */
    while (str[i] != '\0')
    {
        i++;
    }

    printf("Length of the string = %d\n", i);
    return 0;
}