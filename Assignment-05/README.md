# Dynamic Array Management

## Objective

To learn dynamic memory allocation in C using `malloc()` and `free()` by creating a program that stores student marks, displays them, calculates statistics, and releases the allocated memory.

## Problem Statement

Write a C program that dynamically allocates memory for storing the marks of **N students** using `malloc()`. The program should:
- Store marks of students.
- Display all marks.
- Find the highest marks.
- Find the lowest marks.
- Calculate the total marks.
- Calculate the average marks.
- Release the allocated memory using `free()`.

## Algorithm

1. Start the program.
2. Input the number of students (`N`).
3. Dynamically allocate memory for `N` marks using `malloc()`.
4. Check if memory allocation is successful.
5. Input marks of all students.
6. Display all student marks.
7. Find the highest and lowest marks.
8. Calculate the total and average marks.
9. Display the results.
10. Release the allocated memory using `free()`.
11. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Input Marks | O(N) |
| Display Marks | O(N) |
| Find Highest | O(N) |
| Find Lowest | O(N) |
| Calculate Total | O(N) |
| Calculate Average | O(1) |

## Space Complexity

**O(N)** (Dynamic memory is allocated to store the marks of N students.)

## Sample Input

```
Enter number of students: 5

Enter marks of 5 students:
78
85
92
67
80
```

## Sample Output

```
Marks of Students:
Student 1 : 78
Student 2 : 85
Student 3 : 92
Student 4 : 67
Student 5 : 80

Statistics
Highest Marks : 92
Lowest Marks  : 67
Total Marks   : 402
Average Marks : 80.40

Memory Released Successfully.
```

## Learning Outcome

- Learned dynamic memory allocation using `malloc()`.
- Understood how to access dynamically allocated arrays.
- Calculated highest, lowest, total, and average marks.
- Learned the importance of releasing memory using `free()`.
- Improved understanding of pointers and dynamic arrays.
```