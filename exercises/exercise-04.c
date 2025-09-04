/* 
  Title: (exercise 04)
  ```c
/*
Title: Exercise 04 – Pointer Aliasing and Const-Correctness
Learning Objective: Understand the implications of const correctness with pointer aliasing and ownership in function parameters.

Problem Statement:
Create a function that takes a pointer to an array of integers and modifies the first element. The function should also accept a const pointer to an integer to ensure the caller cannot modify that integer through the function. Ensure that the original array retains its integrity after the function call.

Scenario Checks:
1. After calling the function with an integer array, the first element of the array should reflect the modification made by the function.
2. The rest of the elements in the array should remain unchanged after the function call.
3. Attempting to modify the integer passed as a const pointer within the function should result in a compilation error, ensuring const correctness.
4. The function should not alter the pointer to the array itself; any changes to the pointer should not affect the caller's original pointer.
5. The original array should be properly freed after the function call to avoid memory leaks, demonstrating correct memory management.
*/ 
```

  INSTRUCTIONS:
  - Implement your solution in this file below.
  - Do NOT add TODO markers; write your own minimal code.
  - Keep it focused on the pointer concept; no algorithms.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Write your few lines here. Keep it minimal and pointer-focused.
    return 0;
}
