/* 
  Title: (exercise 11)
  ```c
/*
Title: Exercise 11 – Understanding Pointer-to-Pointer and Ownership

Learning Objective: Explore the implications of using pointer-to-pointer for managing ownership and lifetime.

Problem Statement: Create a function that accepts a pointer-to-pointer and modifies the memory it points to. Ensure the function's design clarifies ownership semantics. Additionally, demonstrate the effect of passing a pointer versus a pointer-to-pointer by observing the changes in the caller's context.

Scenario Checks:
1. When a pointer-to-pointer is passed to the function, the caller should observe that the memory location has been updated as intended, reflecting the changes made within the function.
2. If a regular pointer is passed instead of a pointer-to-pointer, the function should not affect the original pointer in the caller's context, maintaining its previous value.
3. After the function call, if memory was allocated within the function, it should be properly freed in the caller to avoid memory leaks, demonstrating correct ownership transfer.
4. Attempting to access the modified memory in the caller after freeing it should lead to undefined behavior, emphasizing the importance of understanding lifetime and ownership.
5. If the function is designed to modify the pointer itself (not just the data it points to), ensure that the caller's pointer reflects this change when using a pointer-to-pointer but remains unchanged when using a single pointer.
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
