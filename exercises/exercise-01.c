/* 
  Title: (exercise 01)
  ```c
/*
Title: Exercise 01 - Ownership and Lifetime of Dynamic Arrays
Learning Objective: Understand the implications of passing pointers and pointer-to-pointer in function parameters, especially regarding ownership and memory management.

Constraints: 
- Use dynamic memory allocation with malloc and free.
- Do not use global variables.
- Avoid using any form of array indexing; only pointer arithmetic is allowed.

Problem Statement:
Write a function `initializeArray` that takes a pointer to a pointer of an integer (`int **arr`) and an integer `size`. Inside the function, allocate memory for an array of integers of the given size and initialize each element to its index value. The function should not return the array; instead, it should modify the pointer passed in, reflecting the new memory address. In the main function, call this `initializeArray` function, then print the elements of the array. Finally, free the allocated memory in the main function.

Scenario Checks:
1. After calling `initializeArray`, the pointer in the main function should point to a valid memory address containing an array of integers.
2. The elements of the array should be initialized to their respective indices (e.g., arr[0] = 0, arr[1] = 1, ...).
3. If the `size` parameter is set to 0, the pointer should not point to any allocated memory.
4. The memory allocated for the array should be properly freed in the main function to avoid memory leaks.
5. Attempting to access the array in the main function without calling `initializeArray` should lead to undefined behavior.
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
