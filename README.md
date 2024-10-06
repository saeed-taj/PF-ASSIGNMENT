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





# Poker Hand Comparison Program in C

This project contains a C program that compares two poker hands and determines which hand wins or if there is a tie. The program allows users to input two poker hands, each consisting of 5 cards, and evaluates the rank of each hand to declare the winner.

## Features

- **Hand Evaluation**: The program can evaluate common poker hand rankings, such as flush, straight, full house, four of a kind, etc.
- **Comparison**: It compares two poker hands and declares the winner based on hand strength.
- **Random Hand Testing**: The program also supports generating and comparing random poker hands for testing purposes.

## Program Description

### Functions

1. **suit(char \*card)**:
   - Extracts and returns the suit of a card (e.g., 'C' for clubs, 'H' for hearts).

2. **value(char \*card)**:
   - Returns the numerical value of a card. It treats face cards ('J', 'Q', 'K', 'A') as 11, 12, 13, and 14, respectively.

3. **is_flush(char cards[][3])**:
   - Checks if all cards in a hand share the same suit, indicating a flush.

4. **hand_dist(char cards[][3], int \*initial)**:
   - Determines the distribution of card values in a hand and stores them in an array.

5. **highestone(char cards[][3])**:
   - Checks if the hand contains a straight and returns the highest card in the straight.

6. **card_count(char cards[][3], int num, int direct)**:
   - Counts how many cards of a given value are present in the hand, useful for detecting pairs, three-of-a-kind, etc.

7. **hand_rank(char cards[][3])**:
   - Assigns a rank to the hand based on poker rules. The ranks range from 0 (no pair) to 8 (straight flush).

8. **check_strings(char hand1[][3], char hand2[][3])**:
   - Compares two poker hands by their rank and returns -1, 0, or 1 depending on whether the first hand is weaker, tied, or stronger than the second.

9. **pooker(char hand1[][3], char hand2[][3])**:
   - Determines the winner between two hands and prints the result ("Player 1 wins", "Player 2 wins", or "It's a tie").

10. **test_random_hands(int n)**:
    - Generates random poker hands for testing purposes and compares them.

### How the Program Works

1. The user is prompted to input two poker hands. Each hand consists of 5 cards.
2. The program evaluates the rank of each hand using the function `hand_rank()`.
3. It compares the two hands and declares which player wins or if it’s a tie.
4. Optional functionality: The program can also generate random poker hands for testing purposes.






