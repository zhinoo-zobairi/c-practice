/* 
  Title: (exercise 02)
  ```c
/*
Title: Exercise 02 – Pointer Ownership and Lifetime Management

Learning Objective: Understand how to manage pointer ownership and lifetimes when passing pointers to functions.

Problem Statement: Write a function that takes a pointer to a pointer and modifies the original pointer to point to a new memory allocation. Ensure proper management of the original memory to avoid memory leaks.

Scenario Checks:
1. After calling the function, the original pointer should point to a new allocated memory space, and the previous memory should be freed.
2. If the function is called with a NULL pointer, it should not attempt to free any memory and should allocate a new block.
3. If the function is called multiple times with the same original pointer, it should free the previously allocated memory before assigning the new allocation.
4. The function should not modify the contents of the allocated memory, only the pointer itself.
5. If a constant pointer is passed to the function, it should not allow modification of the original pointer's address, preventing any memory leaks or invalid access.
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
