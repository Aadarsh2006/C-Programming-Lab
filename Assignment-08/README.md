# Employee Payroll System

## Objective

To learn the use of structures, arrays, functions, and conditional statements in C by developing an Employee Payroll System that calculates salary components and displays employee salary reports.

## Problem Statement

Write a C program to create an Employee Payroll System using structures and arrays. The program should:

- Accept employee details (Employee ID, Name, and Basic Salary).
- Calculate:
  - HRA (House Rent Allowance)
  - DA (Dearness Allowance)
  - Tax
  - Gross Salary
  - Net Salary
- Display the salary report of all employees.
- Sort employees based on their Net Salary.

## Algorithm

1. Start the program.
2. Display the menu.
3. Accept the user's choice.
4. Perform the selected operation:
   - Add Employee
   - Display Salary Report
   - Sort Employees by Net Salary
5. Repeat until the user chooses Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Employee | O(1) |
| Display Salary Report | O(N) |
| Calculate Salary Components | O(1) per employee |
| Sort Employees (Bubble Sort) | O(N²) |

## Space Complexity

**O(N)** (Stores details of N employees in an array of structures.)

## Sample Input

```
1
Enter Employee ID: 101
Enter Employee Name: Rahul Sharma
Enter Basic Salary: 50000

1
Enter Employee ID: 102
Enter Employee Name: Priya Singh
Enter Basic Salary: 40000

2
```

## Sample Output

```
Employee 1
ID           : 101
Name         : Rahul Sharma
Basic Salary : 50000.00
HRA          : 10000.00
DA           : 5000.00
Tax          : 3250.00
Gross Salary : 65000.00
Net Salary   : 61750.00

Employee 2
ID           : 102
Name         : Priya Singh
Basic Salary : 40000.00
HRA          : 8000.00
DA           : 4000.00
Tax          : 2600.00
Gross Salary : 52000.00
Net Salary   : 49400.00
```

## Learning Outcome

- Learned to use structures to store employee records.
- Understood salary calculations using arithmetic expressions.
- Implemented HRA, DA, Tax, Gross Salary, and Net Salary calculations.
- Learned to sort employee records using Bubble Sort.
- Improved understanding of arrays, functions, and menu-driven programming in C.
```