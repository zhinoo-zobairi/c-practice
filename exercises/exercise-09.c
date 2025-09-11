/* 
  Title: (exercise 09)
  ```c
/*
Title: Exercise 09 – Pointer Parameters and Ownership Semantics

Learning Objective: Understand the implications of passing pointers versus pointer-to-pointer, especially in the context of ownership and const-correctness.

Problem Statement: Create a function that modifies an array of integers by doubling each element. The function should take a pointer to a pointer (int**) to allow for dynamic memory allocation within the function. Ensure that the original array is modified correctly.

Scenario Checks:
1. After calling the function, the original array must reflect the doubled values, indicating that the function properly modified the memory the pointer points to.
2. If the function is called with a NULL pointer as the argument, it should gracefully handle the case without crashing, ensuring robust memory management.
3. The memory allocated within the function should be freed correctly after use to avoid memory leaks, demonstrating proper ownership transfer.
4. If a const pointer to the array is passed instead, the function should not modify the contents, ensuring const-correctness is respected.
5. Ensure that the function can handle varying lengths of the array without assumptions about its size, showcasing robust parameter handling.
*/
```

  INSTRUCTIONS:
  - Implement your solution in this file below.
  - Do NOT add TODO markers; write your own minimal code.
  - Keep it focused on the pointer concept; no algorithms.
*/

#include <stdio.h>
#include <stdlib.h>
void double_values(int** pptr, int size){
    if (pptr == NULL || *pptr == NULL) return;
    for (int i=0; i < size; i++){
        (*pptr)[i] *= 2;
    }
}
int main(void) {
    int size = 5;
    int* ptr = malloc(sizeof(int)*5);
    int** pptr= &ptr;
    for (int i=0; i < size; i++){
        ptr[i] = i;
    }
    double_values(pptr, size);
    for (int i=0; i < size; i++){
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}
