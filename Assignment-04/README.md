# Student Record Management System

## Objective
To develop a menu-driven Student Record Management System using structures in C that allows users to add, display, search, update, and delete student records.

## Problem Statement
Write a menu-driven C program to manage student records using structures. The program should:
- Add new student records.
- Display all student records.
- Search a student by Roll Number.
- Update student details.
- Delete a student record.

## Algorithm
1. Start the program.
2. Display the menu with different operations.
3. Read the user's choice.
4. Perform the selected operation:
   - Add a student.
   - Display all students.
   - Search a student by Roll Number.
   - Update student details.
   - Delete a student record.
5. Repeat the menu until the user selects Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Student | O(1) |
| Display Students | O(N) |
| Search Student | O(N) |
| Update Student | O(N) |
| Delete Student | O(N) |

## Space Complexity

- **O(N)** (Array of structures is used to store student records.)

## Sample Input

```
Choice: 1

Enter Roll Number: 101
Enter Name: Rahul
Enter Age: 20
```

## Sample Output

```
Student Added Successfully.
```

## Learning Outcome

- Learned the use of structures in C.
- Stored multiple records using an array of structures.
- Implemented a menu-driven program.
- Performed searching, updating, and deleting records.
- Improved understanding of arrays, structures, and functions.
```