/*
Title: Exercise 08 – Pointer Aliasing and Const-Correctness

Learning Objective: Understand the implications of using const pointers and pointer-to-pointer semantics.

Problem Statement: Create a function that accepts a pointer to a pointer and a const pointer, modifying the original pointer to point to the data referenced by the const pointer. Ensure that the original data remains unchanged, and validate the behavior of the pointers after the function call.

Scenario Checks:
1. After calling the function, the original pointer should point to the data of the const pointer, while the const pointer's data should remain unchanged.
2. Attempting to modify the data pointed to by the const pointer inside the function should result in a compilation error, demonstrating const-correctness.
3. The lifetime of the data pointed to by the const pointer should persist beyond the function call, ensuring the original pointer remains valid after the function returns.
4. If the original pointer is null before the function call, it should be updated to point to the data of the const pointer without any memory leaks.
5. After the function call, dereferencing the original pointer should yield the same value as dereferencing the const pointer, confirming that the assignment was successful.
*/

#include <stdio.h>
#include <stdlib.h>

void modify(const int** pptr, const int* const ptr) { // const always modifies whatever is immediately to its left(either the int or the asterisc) If there's nothing to the left, it modifies what's to its right.
  if (pptr == NULL) return;
  *pptr = ptr; // Safe, const-to-const
}
int main(void) {
    // Write your few lines here. Keep it minimal and pointer-focused.
    const int value = 10;
    const int* const address = &value;
    int* ptr = malloc(sizeof(int));
    const int** pptr = malloc(sizeof(int*)); // So that when we assign address to pptr they have the same type
    modify(pptr, address);
    printf("%d\n", **pptr);

    free(ptr);
    free(pptr);
    return 0;
    return 0;
}
