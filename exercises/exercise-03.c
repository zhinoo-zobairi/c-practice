/*
Title: Exercise 03 – Navigating Arrays with Pointers

Learning Objective:
Strengthen your ability to navigate arrays using pointer arithmetic instead of array indexing.

Problem Statement:
Write a function `square_values` that accepts a pointer to the start of an integer array and a size. The function should square each value in the array **in-place** using **only pointer arithmetic** — no bracket notation allowed.

Then, in `main`, allocate a dynamic array of integers, initialize it with some values, pass it to `square_values`, and print the squared values.

Constraints:
- You must not use the `[]` operator inside your function.
- Use `malloc` and `free` appropriately.
- Do not use global variables.

Scenario Checks:
1. Input: [1, 2, 3, 4] → Output: [1, 4, 9, 16]
2. Function must work on any array length ≥ 0
3. The function must not access memory out of bounds
4. Proper memory cleanup should be handled in main
5. The logic must work correctly when the size is 0 (i.e., should do nothing)
*/

#include <stdio.h>
#include <stdlib.h>
void square_values(int* arr_ptr, int size){
  if (size == 0) return;
  for (int i = 0; i < size; i++) {
      * (arr_ptr + i) = (* (arr_ptr + i)) * (* (arr_ptr + i));
    }
}
int main(void) {
    int* arr_ptr = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
      arr_ptr[i] = i;
    }
    square_values(arr_ptr, 5);
    for (int i = 0; i < 5; i++) {
      printf("%d\n", arr_ptr[i]);
    }
    free(arr_ptr);
    return 0;
}
