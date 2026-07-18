# Dynamic Array Operations

## Objective

To learn dynamic memory allocation in C by implementing operations on a dynamic array, including insertion, deletion, updating, searching, displaying elements, and comparing Linear Search and Binary Search after sorting.

## Problem Statement

Write a C program to perform the following operations on a dynamic array using dynamic memory allocation:

- Insert an element.
- Delete an element.
- Update an element.
- Display all elements.
- Perform Linear Search.
- Sort the array.
- Perform Binary Search on the sorted array.
- Release the allocated memory using `free()`.

## Algorithm

1. Start the program.
2. Input the initial size of the array.
3. Dynamically allocate memory using `malloc()`.
4. Enter the array elements.
5. Display the menu.
6. Perform the selected operation:
   - Insert an element using `realloc()`.
   - Delete an element.
   - Update an element.
   - Display the array.
   - Perform Linear Search.
   - Sort the array using Bubble Sort.
   - Perform Binary Search.
7. Repeat until the user chooses Exit.
8. Release the allocated memory using `free()`.
9. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Insert Element | O(N) *(due to `realloc()`)* |
| Delete Element | O(N) |
| Update Element | O(N) |
| Display Array | O(N) |
| Linear Search | O(N) |
| Bubble Sort | O(N²) |
| Binary Search | O(log N) |

## Space Complexity

**O(N)** (Dynamic memory is allocated to store the array elements.)

## Sample Input

```
Enter initial size of array: 5

Enter 5 elements:
10
25
15
40
30

1
Enter element to insert: 50

5

6
Enter element to search: 30
```

## Sample Output

```
Element Inserted Successfully.

Array Sorted Successfully.

Element Found at Position 5
```

## Learning Outcome

- Learned dynamic memory allocation using `malloc()`, `realloc()`, and `free()`.
- Implemented insertion, deletion, updating, and displaying elements in a dynamic array.
- Understood the working of Linear Search and Binary Search.
- Learned Bubble Sort for sorting an array.
- Improved understanding of dynamic arrays, searching algorithms, and menu-driven programming in C.