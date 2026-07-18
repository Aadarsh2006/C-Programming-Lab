#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float tax;
    float grossSalary;
    float netSalary;
};

struct Employee emp[100];
int n = 0;

void menu();
void addEmployee();
void displayEmployees();
void sortEmployees();

int main()
{
    int choice;

    do
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                sortEmployees();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

void menu()
{
    printf("\n----- EMPLOYEE PAYROLL SYSTEM -----\n");
    printf("1. Add Employee\n");
    printf("2. Display Salary Report\n");
    printf("3. Sort by Net Salary\n");
    printf("4. Exit\n");
}

void addEmployee()
{
    printf("Enter Employee ID: ");
    scanf("%d", &emp[n].id);

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", emp[n].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[n].basicSalary);

    emp[n].hra = emp[n].basicSalary * 0.20;
    emp[n].da = emp[n].basicSalary * 0.10;
    emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

    emp[n].tax = emp[n].grossSalary * 0.05;
    emp[n].netSalary = emp[n].grossSalary - emp[n].tax;

    n++;

    printf("Employee Added Successfully.\n");
}

void displayEmployees()
{
    int i;

    if(n == 0)
    {
        printf("No Employee Records Found.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("ID           : %d\n", emp[i].id);
        printf("Name         : %s\n", emp[i].name);
        printf("Basic Salary : %.2f\n", emp[i].basicSalary);
        printf("HRA          : %.2f\n", emp[i].hra);
        printf("DA           : %.2f\n", emp[i].da);
        printf("Tax          : %.2f\n", emp[i].tax);
        printf("Gross Salary : %.2f\n", emp[i].grossSalary);
        printf("Net Salary   : %.2f\n", emp[i].netSalary);
    }
}

void sortEmployees()
{
    int i, j;
    struct Employee temp;

    if(n == 0)
    {
        printf("No Employee Records Found.\n");
        return;
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(emp[j].netSalary > emp[j + 1].netSalary)
            {
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    printf("Employees Sorted by Net Salary Successfully.\n");
}