# Structures, Unions, Memory management

## Week : 5

Each student completes two tasks from the list. Other tasks can be used for practice and exam preparation, but you don't
submit them for review by assistants.

Formula for selecting the 1st task: 2378 % 20 + 1 = 19 - the student completes task 19

Formula for selecting the 2nd task: 2378 % 20 + 21 = 39 - the student completes task 39

## Task 1

- Task Index 5726 % 20 + 1 = `7`.
- Task description:

```text
Write a function that subtracts two complex numbers and returns the result via function arguments (using pointers). 
Represent complex numbers using a structure. Test the function in the main program.
```

### Usage

* Input: ComplexNumber{3.5,2.0},ComplexNumber{1.5,1.0}
    * Output:
      ```text
      Result: 2.0 + 1.0i
      ```

## Task 2

- Task Index 5726 % 20 + 21 = `27`.
-
    - Task description:

```text
Write a function that compresses an array so that each sequence of consecutive zeros is replaced by a single zero.
The function should return a dynamically allocated array obtained by compressing the original array.
```

### Usage

* Input: { 1, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 2 }
    * Output:
      ```text
      Compressed array: 1 0 3 0 5 0 2
      ```