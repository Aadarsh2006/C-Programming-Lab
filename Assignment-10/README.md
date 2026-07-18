# LeetCode Array Challenge

## Objective

To learn and implement common array operations in C, including finding largest and smallest elements, reversing an array, removing duplicates, counting frequency, searching, and sorting while analyzing the time complexity of each operation.

## Problem Statement

Write a C program to perform the following operations on an array:

- Find the largest and second largest elements.
- Find the smallest and second smallest elements.
- Reverse the array.
- Remove duplicate elements.
- Count the frequency of each element.
- Search for an element using Linear Search.
- Sort the array using Bubble Sort.
- Analyze the time complexity of each operation.

## Algorithm

1. Start the program.
2. Input the number of elements and the array elements.
3. Display the menu.
4. Perform the selected operation:
   - Find Largest & Second Largest
   - Find Smallest & Second Smallest
   - Reverse the Array
   - Remove Duplicates
   - Count Frequency
   - Perform Linear Search
   - Sort the Array
   - Display the Array
5. Repeat until the user chooses Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Find Largest & Second Largest | O(N) |
| Find Smallest & Second Smallest | O(N) |
| Reverse Array | O(N) |
| Remove Duplicates | O(N²) |
| Count Frequency | O(N²) |
| Linear Search | O(N) |
| Bubble Sort | O(N²) |
| Display Array | O(N) |

## Space Complexity

**O(N)** (The program stores the array and uses an auxiliary array for frequency counting.)

## Sample Input

```
Enter number of elements: 8

Enter array elements:
5 3 8 3 10 2 8 1

1
2
3
4
5
6
Enter element to search: 10

7

8
```

## Sample Output

```
Largest = 10
Second Largest = 8

Smallest = 1
Second Smallest = 2

Array Reversed Successfully.

Duplicates Removed Successfully.

Element Frequency
5 occurs 1 time(s)
3 occurs 2 time(s)
8 occurs 2 time(s)
10 occurs 1 time(s)
2 occurs 1 time(s)
1 occurs 1 time(s)

Element Found at Position 5

Array Sorted Successfully.

Array: 1 2 3 5 8 10
```

## Learning Outcome

- Learned various array operations in C.
- Implemented algorithms to find largest, smallest, and second largest/smallest elements.
- Understood array reversal and duplicate removal techniques.
- Implemented frequency counting using arrays.
- Learned Linear Search and Bubble Sort algorithms.
- Improved understanding of algorithm analysis and time complexity.
- Strengthened problem-solving skills using arrays and functions.