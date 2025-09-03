/* 
  Title: (exercise 03)
  ```c
/*
Title: Exercise 03 – Understanding Pointer Ownership and Lifetime
Learning Objective: Grasp the nuances of passing pointers and maintaining ownership through function parameters.

Problem Statement:
Write a function that accepts a pointer to a pointer and modifies the original pointer to point to a new dynamically allocated memory. Ensure that the function handles ownership correctly, allowing the caller to manage the allocated memory. Additionally, create a main function that demonstrates the ownership transfer and memory management.

Scenario Checks:
1. After invoking the function, the original pointer in the caller should point to the newly allocated memory, not the old memory location.
2. The caller must be responsible for freeing the memory allocated by the function to prevent memory leaks.
3. If the function is called multiple times with the same pointer, the previously allocated memory should be freed before reassigning the pointer to the new memory.
4. If the function is given a NULL pointer to begin with, it should allocate memory correctly without causing a segmentation fault.
5. Ensure that the original pointer is not modified if the function fails to allocate memory (e.g., due to insufficient memory).
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
