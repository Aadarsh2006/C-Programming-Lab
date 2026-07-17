# Student Marks Analyzer

## Objective
To develop a menu-driven C program that stores the marks of **N students** and performs various operations such as displaying marks, finding the highest and lowest marks, calculating total and average marks, searching for a student's marks, and sorting the marks in ascending order.

## Problem Statement
Write a menu-driven C program to analyze student marks using arrays. The program should allow the user to:
- Store marks of N students.
- Display all marks.
- Find the highest and lowest marks.
- Calculate total and average marks.
- Search for a student's marks.
- Sort marks in ascending order.
- Exit the program through a menu option.

## Algorithm
1. Start the program.
2. Input the number of students (N).
3. Store the marks of all students in an array.
4. Display a menu with the following options:
   - Display marks
   - Find highest marks
   - Find lowest marks
   - Calculate total marks
   - Calculate average marks
   - Search for a student's marks
   - Sort marks in ascending order
   - Exit
5. Perform the selected operation using appropriate loops and conditions.
6. Repeat the menu until the user chooses to exit.
7. End the program.

## Time Complexity
| Operation | Time Complexity |
|-----------|-----------------|
| Display Marks | O(N) |
| Highest Marks | O(N) |
| Lowest Marks | O(N) |
| Total Marks | O(N) |
| Average Marks | O(N) |
| Search Marks | O(N) |
| Sort Marks (Bubble Sort) | O(N²) |

## Space Complexity
- **O(N)** (Array used to store marks of N students)

## Sample Input
```
Enter number of students: 5

Enter marks:
78
92
65
84
70

Choice: 2
```

## Sample Output
```
Highest Marks = 92
```

## Learning Outcome
- Understanding of one-dimensional arrays.
- Implementation of menu-driven programs.
- Use of loops and conditional statements.
- Searching elements in an array.
- Sorting arrays using Bubble Sort.
- Finding maximum, minimum, total, and average values.