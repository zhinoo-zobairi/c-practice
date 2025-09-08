/* 
  Title: (exercise 06)
  ```c
/*
Title: Exercise 06 – Pointer Passing and Const-Correctness

Learning Objective: Understand the implications of passing pointers and const-correctness in function parameters.

Problem Statement: Write a function that takes a pointer to a pointer and a constant pointer. The function should modify the pointer to pointer to point to a new memory location, while the constant pointer should not be modified. Ensure proper memory management for any allocated memory.

Scenario Checks:
1. After calling the function, the original pointer should point to a newly allocated memory location, while the constant pointer remains unchanged.
2. If the function is called multiple times, ensure that previously allocated memory is freed to avoid memory leaks.
3. Attempting to modify the constant pointer inside the function should result in a compilation error, demonstrating const-correctness.
4. The function should handle null pointers gracefully, ensuring that no dereferencing occurs on null values.
5. Ensure that the lifetime of the allocated memory persists beyond the function call, allowing for safe access after the function has returned.
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
