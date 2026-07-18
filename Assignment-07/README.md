# Hospital Patient Management

## Objective

To learn the use of structures, arrays, strings, and functions in C by developing a Hospital Patient Management System that stores and manages patient records.

## Problem Statement

Write a C program to develop a Hospital Patient Management System using structures and arrays. The program should:

- Register new patients.
- Display all patient records.
- Search for a patient using Patient ID.
- Update patient information.
- Delete patient records.

## Algorithm

1. Start the program.
2. Display the menu.
3. Accept the user's choice.
4. Perform the selected operation:
   - Register Patient
   - Display Patient Records
   - Search Patient by ID
   - Update Patient Information
   - Delete Patient Record
5. Repeat until the user chooses Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Register Patient | O(1) |
| Display Patients | O(N) |
| Search Patient | O(N) |
| Update Patient | O(N) |
| Delete Patient | O(N) |

## Space Complexity

**O(N)** (Stores details of N patients in an array of structures.)

## Sample Input

```
1
Enter Patient ID: 101
Enter Patient Name: Rahul Sharma
Enter Age: 25
Enter Disease: Fever

1
Enter Patient ID: 102
Enter Patient Name: Priya Singh
Enter Age: 30
Enter Disease: Malaria

2
```

## Sample Output

```
Patient Records

Patient 1
ID      : 101
Name    : Rahul Sharma
Age     : 25
Disease : Fever

Patient 2
ID      : 102
Name    : Priya Singh
Age     : 30
Disease : Malaria
```

## Learning Outcome

- Learned to use structures for storing multiple attributes of a patient.
- Understood arrays of structures for managing multiple records.
- Implemented searching, updating, and deleting records.
- Improved understanding of functions and menu-driven programming.
- Enhanced problem-solving skills using structures, arrays, strings, and loops.
```