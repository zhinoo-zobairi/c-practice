/* 
  Title: (exercise 00)
  ```c
/*
Title: Pointer Ownership and Lifetime Management

Learning Objective: Understand the implications of passing pointers and pointer-to-pointers in function parameters, especially regarding ownership and lifetime.

Constraints: Use only standard C features; do not use any data structures or algorithms.

Problem Statement: Write a function that allocates an array of integers and assigns it to a pointer passed as a parameter (using T**). Ensure that the caller properly manages the allocated memory by freeing it after use. Use const where appropriate to prevent unintended modifications.

Scenario Checks:
1. After calling the function, the caller should be able to access the allocated integer array and confirm its size.
2. If the caller tries to modify the contents of the array through the pointer, it should succeed if the pointer is not declared as const.
3. The caller must free the allocated memory after use; failing to do so should lead to memory leaks.
4. If a const pointer is passed to the function, it should not allow modifications to the data in the allocated array.
5. Ensure that if the function handles memory allocation failure, it returns an appropriate status to the caller.
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
