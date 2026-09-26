# C Algorithm & Data Structure Solutions

This repository provides a comprehensive collection of C programming solutions categorized into array manipulation, matrix traversal, bitwise operations, mathematical greedy algorithms, and backtracking. It serves as a reference for foundational data structure techniques and common technical interview problems.

## Repository Contents

### Array Operations & Algorithms
* **`SlidingWindowFixed.c.c`**: Implements a fixed-size sliding window algorithm to calculate the maximum sum of a contiguous subarray of size `k`[cite: 1]. The logic calculates an initial window sum and slides it across the array by subtracting the outgoing left element and adding the incoming right element[cite: 1].
* **`ProductOfArrayExceptSelf.c.c`**: A naive implementation that iterates through the array using nested `for` loops to calculate the product of all elements excluding the current index[cite: 6].
* **`ProductOfArrayExceptSelfUsingPointer.c.c`**: An optimized algorithm that computes the product of the array except self using dynamically allocated memory to store prefix products, then iterates backwards with a running `suffix` multiplier[cite: 7].
* **`Jump.c.c`**: Implements two jumping logic functions: `can_ball_reach` evaluates if the end of an array is reachable by tracking the maximum reachable index, and `minimum_jumps` calculates the lowest number of jumps required to reach the destination[cite: 9].
* **`KokoEatingBananas.c.c`**: Uses a binary search algorithm within the `minSpeed` function to efficiently find the minimum eating speed required to consume all banana bunches within a given `h` hours[cite: 10].

### Matrix Operations
* **`RotateImage.c.c`**: Rotates a 2D matrix in-place by first transposing the matrix (swapping row and column indices) and subsequently reversing the elements within every row[cite: 13].
* **`SpiralOrder.c.c`**: Iterates over a 2D matrix and prints its elements in a spiral order by continuously adjusting `top`, `bottom`, `left`, and `right` boundary variables[cite: 14].
* **`SpiralOrder2.c.c`**: Dynamically generates an $N \times N$ matrix and fills it with incremental values starting from $1$ in a spiral sequence, utilizing `malloc` for memory allocation[cite: 15].
* **`TraversingMatrix.c.c`**: A standard utility script that accepts user input via `scanf` to construct an $m \times n$ matrix, reads the elements, and prints them to the console[cite: 16].
* **`DiagonalTraverse.c.c`**: Traverses and prints a 2D matrix diagonally, toggling the traversal direction (upwards or downwards) based on whether the computed diagonal index is even or odd[cite: 18].

### Bit Manipulation
* **`BitManupulation.c.c`**: A foundational script demonstrating operators by printing the output of bitwise AND (`6 & 2`), logical OR (`6 || 2`), and bitwise NOT (`~5`)[cite: 3].
* **`SwapUsingExor.c.c`**: Exchanges the values of two integers (`a` and `b`) sequentially in-place using bitwise XOR (`^`), completely bypassing the need for a temporary holding variable[cite: 2].
* **`CountingBits.c.c`**: Computes the total number of set bits (1s) for every integer from $0$ up to $n$ by utilizing bitwise AND (`n & 1`) and right shift (`n >> 1`) operations inside a `while` loop[cite: 4].
* **`SingleNumber.c.c`**: Iterates through an array and applies the XOR operation (`^=`) against a running result to isolate and identify the single non-repeating number[cite: 8].

### Math & Greedy Algorithms
* **`MinimumNoteExchange.c.c`**: A greedy mathematical approach that calculates the minimum currency notes required to dispense change by applying sequential division and modulo operators across hardcoded denominations[cite: 11].
* **`MinimumNoteExchangeUsingForLoop.c.c`**: Computes the minimum required notes for change by iteratively dividing the remainder against a predefined array of descending denominations (`{100, 50, 20, 10, 5, 2, 1}`)[cite: 12].

### Backtracking & Pathfinding
* **`BikeAndThePath.c.c`**: Employs a recursive backtracking algorithm (`findpath`) to navigate an $N \times N$ maze, appending 'D' for Down and 'R' for Right to a path character array while marking visited cells[cite: 17]. 

## Compilation and Execution

To compile and run any of these files, utilize a C compiler such as `gcc`. Execute the following commands in your terminal:

```bash
License
This repository is licensed under the MIT License, Copyright (c) 2026 Shirali16. The software is provided "as is" and permits the use, modification, and distribution of the code subject to standard MIT conditions.
# Example compilation for the Koko algorithm
gcc KokoEatingBananas.c.c -o koko
./koko
