#include <stdio.h>

int main() {
    /* Variable decleration */
    double marks;

    /* Input section */
    printf("Enter student marks: ");
    scanf("%lf", &marks);

    /* Grade calculation & Output Section */
    if (marks >= 90) 
    {
        printf("Grade: A+ \n");
    } 
    else if (marks >= 80) 
    {
        printf("Grade: A \n");
    } 
    else if (marks >= 70) 
    {
        printf("Grade: B ");
    } 
    else if (marks >= 60) 
    {
        printf("Grade: C \n");
    } 
    else if (marks >= 50) 
    {
        printf("Grade: D \n");
    } 
    else 
    {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}