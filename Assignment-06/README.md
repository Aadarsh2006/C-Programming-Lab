# Inventory Management System

## Objective

To learn the use of structures and arrays in C by developing a simple Inventory Management System that stores product details, performs searching, updating, sorting, and calculates the total inventory value.

## Problem Statement

Write a C program to create an Inventory Management System using structures and arrays. The program should:

- Store Product ID, Product Name, Price, and Quantity.
- Add new products.
- Display all products.
- Search for a product using its Product ID.
- Update product details.
- Sort products by price.
- Calculate the total inventory value.

## Algorithm

1. Start the program.
2. Display the menu.
3. Accept the user's choice.
4. Perform the selected operation:
   - Add Product
   - Display Products
   - Search Product
   - Update Product
   - Sort Products by Price
   - Calculate Total Inventory Value
5. Repeat until the user chooses Exit.
6. End the program.

## Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Add Product | O(1) |
| Display Products | O(N) |
| Search Product | O(N) |
| Update Product | O(N) |
| Sort Products (Bubble Sort) | O(N²) |
| Total Inventory Value | O(N) |

## Space Complexity

**O(N)** (Stores details of N products in an array of structures.)

## Sample Input

```
1
Enter Product ID: 101
Enter Product Name: Laptop
Enter Price: 55000
Enter Quantity: 2

1
Enter Product ID: 102
Enter Product Name: Mouse
Enter Price: 700
Enter Quantity: 5

6
```

## Sample Output

```
Total Inventory Value = 113500.00
```

## Learning Outcome

- Learned to use structures to store multiple attributes of a product.
- Understood arrays of structures.
- Implemented searching and updating of records.
- Learned Bubble Sort to sort products by price.
- Calculated the total inventory value using loops and arithmetic operations.
- Improved understanding of menu-driven programming in C.
```