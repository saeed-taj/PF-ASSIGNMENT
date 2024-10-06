# PF-ASSIGNMENT
# Largest Product in a Matrix - C++ Program

This repository contains a C++ program that calculates the largest product of four adjacent numbers in a 20x20 matrix. The program computes the product in four possible directions:
1. **Horizontal**
2. **Vertical**
3. **Main Diagonal (left to right)**
4. **Second Diagonal (right to left)**

The purpose of this project is to demonstrate matrix manipulation and applying algorithms to solve problems related to finding the maximum product in a matrix.

## Functionality

The program implements four functions to calculate the largest product in different directions:
1. **largest_product_horizontal()**: Finds the largest product of four adjacent numbers in a horizontal direction.
2. **largest_product_vertically()**: Finds the largest product of four adjacent numbers in a vertical direction.
3. **largest_product_diag_main()**: Finds the largest product of four adjacent numbers along the main diagonal (left-to-right diagonal).
4. **largest_product_diag_second()**: Finds the largest product of four adjacent numbers along the second diagonal (right-to-left diagonal).

### How the Program Works

- It processes the 20x20 matrix using each of the above functions.
- Then it compares the results from all four directions and determines which direction has the largest product.
- Finally, it prints the direction where the largest product is found along with the product value.


