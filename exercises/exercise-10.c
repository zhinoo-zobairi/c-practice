/* 
  Title: (exercise 10)
  ```c
/*
Title: Exercise 10 – Function Parameter Semantics and Lifetime Management

Learning Objective: Understand the implications of passing pointers versus pointer-to-pointers, especially regarding ownership and lifetime.

Problem Statement: Create a function that modifies an array of integers by doubling its elements. The function should take a pointer to a pointer as a parameter to reflect the changes made to the original array. Ensure proper memory management by dynamically allocating and freeing the array within the function.

Scenario Checks:
1. After calling the function, the original array should have its elements doubled, verifying that the changes persist outside the function scope.
2. If the function is called with a NULL pointer, it should handle this gracefully without causing a crash or undefined behavior.
3. Ensure that the memory allocated for the array is properly freed after use, preventing memory leaks in the program.
4. If a const pointer is passed into the function, the function must not modify the original array, and the caller should observe that the original values remain unchanged.
5. When passing an array directly to the function, confirm that it correctly interprets the array's base address and modifies its contents as intended.
*/
```

  INSTRUCTIONS:
  - Implement your solution in this file below.
  - Do NOT add TODO markers; write your own minimal code.
  - Keep it focused on the pointer concept; no algorithms.
*/

#include <stdio.h>
#include <stdlib.h>

void new_array(int** pptr, int size){
  int* temp_ptr;
  temp_ptr = malloc(sizeof(int) * size);
  for (int i = 0; i < size; i++) {
    temp_ptr[i] = (*pptr)[i]  * 2;
  }
  free(*ptr); // Free memory that ptr points to (the heap block), since free() always works on the address stored inside the pointer, not the pointer variable itself.
  *pptr = temp_ptr;
}

int main(void) {
    int* ptr = malloc(sizeof(int) * size);
    int** pptr = &ptr;
    
    for (int i = 0; i < size; i++) {
        ptr[i] = i;
    }
    
    new_array(pptr, size);

}
