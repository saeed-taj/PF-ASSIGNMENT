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










# Collatz Sequence - Longest Sequence Finder in C++

This repository contains a C++ program that calculates the Collatz sequence for numbers and determines the number under a given limit that generates the longest sequence. The program demonstrates the implementation of loops, conditionals, and function calls in C++.

## What is the Collatz Conjecture?

The **Collatz Conjecture** is a sequence defined as follows:
- Start with any positive integer.
- If the number is even, divide it by 2.
- If the number is odd, multiply it by 3 and add 1.
- Repeat this process until the number reaches 1.

The Collatz Conjecture suggests that this process will always eventually reach 1, regardless of the starting number.

## Program Description

### Functions

1. **conjecture(int start_num)**: 
   - This function calculates the length of the Collatz sequence for a given starting number.
   - It returns the total number of steps (including the starting number) needed for the sequence to reach 1.

2. **largest_seq(int limit, int \*start_num, int \*run)**:
   - This function finds the number below the given limit that produces the longest Collatz sequence.
   - It updates the starting number and the length of the largest sequence through pointer arguments.

### How the Program Works

- The user is prompted to input an upper limit (the maximum number to consider).
- The program calculates the Collatz sequence for each number starting from 2 up to the limit.
- It then prints the number that produces the longest Collatz sequence and the length of that sequence.










