#include <stdio.h>

int main()
{
    /* Variable decleration */
    char s1[100], s2[100];
    int i = 0, j = 0;

    /* Input the first string */
    printf("Enter first string: ");
    scanf("%[^\n]", s1);

    /* Input the second string */
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    while (s1[i] != '\0')
    {
        i++;
    }

    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }
	s1[i] = '\0';

    /* Output section */
    printf("Concatenated string = %s\n", s1);
    return 0;
}