#include <stdio.h>

int main()
{
    /* Variable decleration */
    char str[100];
    int i = 0, len = 0, flag = 1;

    /* Input the string */
    printf("Enter a string: ");
    scanf("%[^\n]", str);   

    /* Find the length of the string */
    while (str[len] != '\0')
    {
        len++;
    }

    /* Palindrome logic */
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;   
            break;
        }
    }
    /* Output section */
    if (flag == 1)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}