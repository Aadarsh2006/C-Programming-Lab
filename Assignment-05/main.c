#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *marks;
    int highest, lowest, total = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    marks = (int *)malloc(n * sizeof(int));

    if(marks == NULL)
    {
        printf("Memory Allocation Failed.\n");
        return 0;
    }

    printf("\nEnter marks of %d students:\n", n);

    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nMarks of Students:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d : %d\n", i + 1, marks[i]);
    }

    highest = marks[0];
    lowest = marks[0];

    for(i = 0; i < n; i++)
    {
        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];

        total += marks[i];
    }

    average = (float)total / n;

    printf("\nStatistics\n");
    printf("Highest Marks : %d\n", highest);
    printf("Lowest Marks  : %d\n", lowest);
    printf("Total Marks   : %d\n", total);
    printf("Average Marks : %.2f\n", average);

    free(marks);

    printf("\nMemory Released Successfully.\n");

    return 0;
}