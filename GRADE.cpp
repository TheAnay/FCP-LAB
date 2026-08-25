#include <stdio.h>

int main() {
    int total_subjects = 5;
    float marks, sum = 0.0, percentage;
    char grade;

    printf("Enter marks for %d subjects (out of 100):\n", total_subjects);

    // Collect marks and calculate total
    for (int i = 1; i <= total_subjects; i++) {
        printf("Subject %d: ", i);
        scanf("%f", &marks);
        sum += marks;
    }

    // Calculate overall percentage
    percentage = (sum / (total_subjects * 100.0)) * 100.0;

    // Determine letter grade based on cascading logic
    if (percentage >= 90.0) {
        grade = 'A';
    } else if (percentage >= 80.0) {
        grade = 'B';
    } else if (percentage >= 70.0) {
        grade = 'C';
    } else if (percentage >= 60.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output final summary
    printf("\n--- Results ---\n");
    printf("Total Marks: %.2f / %.2f\n", sum, total_subjects * 100.0);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Final Grade: %c\n", grade);

    return 0;
}