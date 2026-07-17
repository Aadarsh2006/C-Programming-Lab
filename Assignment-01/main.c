#include <stdio.h>

int main() {
    int n, i, choice, temp;
    int marks[100];
    int highest, lowest, total;
    float average;
    int search, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    do {
        printf("\n----- Student Marks Analyzer -----\n");
        printf("1. Display Marks\n");
        printf("2. Highest Marks\n");
        printf("3. Lowest Marks\n");
        printf("4. Total Marks\n");
        printf("5. Average Marks\n");
        printf("6. Search Marks\n");
        printf("7. Sort Marks (Ascending)\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nMarks of Students:\n");
                for (i = 0; i < n; i++)
                    printf("Student %d: %d\n", i + 1, marks[i]);
                break;

            case 2:
                highest = marks[0];
                for (i = 1; i < n; i++) {
                    if (marks[i] > highest)
                        highest = marks[i];
                }
                printf("Highest Marks = %d\n", highest);
                break;

            case 3:
                lowest = marks[0];
                for (i = 1; i < n; i++) {
                    if (marks[i] < lowest)
                        lowest = marks[i];
                }
                printf("Lowest Marks = %d\n", lowest);
                break;

            case 4:
                total = 0;
                for (i = 0; i < n; i++)
                    total += marks[i];
                printf("Total Marks = %d\n", total);
                break;

            case 5:
                total = 0;
                for (i = 0; i < n; i++)
                    total += marks[i];
                average = total / n;
                printf("Average Marks = %f\n", average);
                break;

            case 6:
                printf("Enter marks to search: ");
                scanf("%d", &search);
                found = 0;

                for (i = 0; i < n; i++) {
                    if (marks[i] == search) {
                        printf("Marks found for Student %d (index %d)\n", i + 1, i);
                        found = 1;
                    }
                }

                if (found!=1)
                    printf("Marks not found.\n");
                break;

            case 7:
                for (i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (marks[j] > marks[j + 1]) {
                            temp = marks[j];
                            marks[j] = marks[j + 1];
                            marks[j + 1] = temp;
                        }
                    }
                }

                printf("Marks sorted in ascending order:\n");
                for (i = 0; i < n; i++)
                    printf("%d ", marks[i]);
                printf("\n");
                break;

            case 8:
                printf("Program executed successfully.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 8);

    return 0;
}