#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    char department[30];
    float salary;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Enter Department: ");
        scanf("%s", emp[i].department);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for(i = 0; i < n; i++) {
        printf("\nID: %d | Name: %s | Dept: %s | Salary: %.2f\n", 
               emp[i].id, emp[i].name, emp[i].department, emp[i].salary);
    }

    return 0;
}