# Function Pointers Lab 5

## Overview
This lab explores function pointers in C through two tasks: sorting process records using a custom comparator and performing arithmetic operations using an array of function pointers.

## Task 1: Process Sorting
Implemented a custom comparison function in `task1/func-ptr.c` to sort process records by priority in descending order and arrival time in ascending order when priorities are equal.

## Task 2: Arithmetic Operations
Implemented an array of function pointers in `task2/task2.c` to select and execute one of five operations based on user input:

- `0` — Addition
- `1` — Subtraction
- `2` — Multiplication
- `3` — Division
- `4` — Exit

The program uses function pointers to dispatch operations without conditional statements.

## Project Structure

- `task1/` — Source code and test data for process sorting.
- `task2/` — Source code for the arithmetic operations.
- `Makefile` — Project build instructions.


