/* 
  Title: (exercise 07)
  ```c
/*
Title: Exercise 07 – Pointer Ownership and Function Parameters

Learning Objective: Understand the implications of passing pointers and pointer-to-pointers in functions regarding ownership and lifetime.

Problem Statement: Write a function that modifies an array of integers. The function should accept a pointer to an array and its size, then double each element in the array. Ensure that the function does not take ownership of the array and that it respects const-correctness for any read-only operations. 

Scenario Checks:
1. When passing the array to the function, the original array should remain unchanged when the function is called with a pointer to it, ensuring no ownership transfer occurs.
2. If the function is called with a size of 0, no changes should be made to the array, and it should remain in its original state.
3. The function should correctly modify the elements of the array in place, and the changes should be reflected in the original array after the function call.
4. If the function is called with a const pointer to the array, it should not attempt to modify the elements, and the original array should remain unchanged.
5. After the function call, the array's memory should still be valid and accessible, demonstrating proper lifetime management.
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
