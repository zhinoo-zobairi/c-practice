/*
Title: Exercise 01 – Dynamic Array and Ownership

Learning Objective: Practice reasoning about memory allocation, ownership, and lifetime when sharing data between functions.

Problem Statement:
Write a function `initializeArray` that prepares an integer sequence of a given size and makes it available to the caller.  
The caller should then print the sequence and release any resources when finished.
 
Scenario Checks:
1. After calling `initializeArray`, the caller can access a valid memory region containing the sequence.
2. The elements of the sequence should correspond to their indices (e.g., 0, 1, 2, ...).
3. If `size` is zero, no allocation should occur.
4. The caller must explicitly release resources to avoid memory leaks.
5. Attempting to access the sequence before initialization should not be valid.
*/

#include <stdio.h>
#include <stdlib.h>

void initializeArray(int** int_pointer, int size){
  if (size == 0) return;
  *int_pointer = malloc(sizeof(int) * size);
  if (*int_pointer == NULL) {
    printf("Memory allocation failed!\n");
    exit(1);
  }
  for(int i = 0; i < size; i++){
    (*int_pointer)[i] = i;
  }
}

int main(void) {
    int* arr;
    initializeArray(&arr, 8);
    for(int i = 0; i < 8; i++){
    printf("%d", arr[i]);
  }
  free(arr);
    return 0;
}
