# String Utility Toolkit

## Objective
To develop a menu-driven C program that performs various string operations such as finding the length, reversing a string, checking palindrome, counting vowels, digits, spaces, and displaying the frequency of each character.

## Problem Statement
Write a menu-driven C program to perform the following string operations:
- Find the length of a string.
- Reverse the string.
- Check whether the string is a palindrome.
- Count vowels, digits, and spaces.
- Display the frequency of each character.

## Algorithm
1. Start the program.
2. Input a string from the user.
3. Display a menu with different string operations.
4. Perform the selected operation:
   - Find string length.
   - Reverse the string.
   - Check palindrome.
   - Count vowels, digits, and spaces.
   - Display character frequency.
   - Enter a new string.
   - Exit the program.
5. Repeat the menu until the user selects Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Find Length | O(N) |
| Reverse String | O(N) |
| Check Palindrome | O(N) |
| Count Vowels, Digits & Spaces | O(N) |
| Character Frequency | O(N²) |

## Space Complexity

- **O(N)** (Used for storing the input string and auxiliary array for frequency calculation.)

## Sample Input

```
Enter a string:
Hello World 123
```

## Sample Output

```
Length = 15

Reversed String:
321 dlroW olleH

String is Not Palindrome.

Vowels = 3
Digits = 3
Spaces = 2

Character Frequency:
H : 1
e : 1
l : 3
o : 2
' ' : 2
W : 1
r : 1
d : 1
1 : 1
2 : 1
3 : 1
```

## Learning Outcome

- Learned to use strings in C.
- Understood string manipulation using functions.
- Implemented menu-driven programs.
- Practiced loops and conditional statements.
- Learned character counting and frequency analysis.
- Improved understanding of functions and arrays.