#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks[3];
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks for 3 subjects: ");
        scanf("%f %f %f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
    }

    printf("\n--- Student Database ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f, %.2f, %.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
    }

    return 0;
}